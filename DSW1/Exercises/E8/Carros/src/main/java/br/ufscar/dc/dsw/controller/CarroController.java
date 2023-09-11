package br.ufscar.dc.dsw.controller;

import java.util.List;

import javax.validation.Valid;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.ModelMap;
import org.springframework.validation.BindingResult;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.servlet.mvc.support.RedirectAttributes;

import br.ufscar.dc.dsw.domain.Marca;
import br.ufscar.dc.dsw.domain.Carro;
import br.ufscar.dc.dsw.service.spec.IMarcaService;
import br.ufscar.dc.dsw.service.spec.ICarroService;

@Controller
@RequestMapping("/carros")
public class CarroController {

	@Autowired
	private ICarroService carroService;

	@Autowired
	private IMarcaService marcaService;

	@GetMapping("/cadastrar")
	public String cadastrar(Carro carro) {
		return "carro/cadastro";
	}

	@GetMapping("/listar")
	public String listar(ModelMap model) {
		model.addAttribute("carros", carroService.buscarTodos());
		return "carro/lista";
	}

	@PostMapping("/salvar")
	public String salvar(@Valid Carro carro, BindingResult result, RedirectAttributes attr) {

		if (result.hasErrors()) {
			return "carro/cadastro";
		}

		carroService.salvar(carro);
		attr.addFlashAttribute("sucess", "carro.create.sucess");
		return "redirect:/carros/listar";
	}

	@GetMapping("/editar/{id}")
	public String preEditar(@PathVariable("id") Long id, ModelMap model) {
		model.addAttribute("carro", carroService.buscarPorId(id));
		return "carro/cadastro";
	}

	@PostMapping("/editar")
	public String editar(@Valid Carro carro, BindingResult result, RedirectAttributes attr) {

		if (result.hasErrors()) {
			return "carro/cadastro";
		}

		carroService.salvar(carro);
		attr.addFlashAttribute("sucess", "carro.edit.sucess");
		return "redirect:/carros/listar";
	}

	@GetMapping("/excluir/{id}")
	public String excluir(@PathVariable("id") Long id, RedirectAttributes attr) {
		carroService.excluir(id);
		attr.addFlashAttribute("sucess", "carro.delete.sucess");
		return "redirect:/carros/listar";
	}

	@ModelAttribute("marcas")
	public List<Marca> listaMarcas() {
		return marcaService.buscarTodos();
	}
}
