package br.ufscar.dc.dsw.controller;

import javax.validation.Valid;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.ModelMap;
import org.springframework.validation.BindingResult;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.servlet.mvc.support.RedirectAttributes;

import br.ufscar.dc.dsw.domain.Marca;
import br.ufscar.dc.dsw.service.spec.IMarcaService;

@Controller
@RequestMapping("/marcas")
public class MarcaController {
	
	@Autowired
	private IMarcaService service;
	
	@GetMapping("/cadastrar")
	public String cadastrar(Marca marca) {
		return "marca/cadastro";
	}
	
	@GetMapping("/listar")
	public String listar(ModelMap model) {
		model.addAttribute("marcas",service.buscarTodos());
		return "marca/lista";
	}
	
	@PostMapping("/salvar")
	public String salvar(@Valid Marca marca, BindingResult result, RedirectAttributes attr) {
		
		if (result.hasErrors()) {
			return "marca/cadastro";
		}
		
		service.salvar(marca);
		attr.addFlashAttribute("sucess", "marca.create.sucess");
		return "redirect:/marcas/listar";
	}
	
	@GetMapping("/editar/{id}")
	public String preEditar(@PathVariable("id") Long id, ModelMap model) {
		model.addAttribute("marca", service.buscarPorId(id));
		return "marca/cadastro";
	}
	
	@PostMapping("/editar")
	public String editar(@Valid Marca marca, BindingResult result, RedirectAttributes attr) {
		
		
		if (result.getFieldErrorCount() > 1 || result.getFieldError("origem") == null) {
			return "marca/cadastro";
		}

		service.salvar(marca);
		attr.addFlashAttribute("sucess", "marca.edit.sucess");
		return "redirect:/marcas/listar";
	}
	
	@GetMapping("/excluir/{id}")
	public String excluir(@PathVariable("id") Long id, ModelMap model) {
		if (service.marcaTemCarros(id)) {
			model.addAttribute("fail", "marca.delete.fail");
		} else {
			service.excluir(id);
			model.addAttribute("sucess", "marca.delete.sucess");
		}
		return listar(model);
	}
}
