package br.ufscar.dc.dsw.controller;

import java.io.IOException;
import java.math.BigDecimal;
import java.util.List;
import java.util.Map;

import org.json.simple.JSONObject;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.RestController;

import com.fasterxml.jackson.databind.ObjectMapper;

import br.ufscar.dc.dsw.domain.Marca;
import br.ufscar.dc.dsw.domain.Carro;
import br.ufscar.dc.dsw.service.spec.ICarroService;

@RestController
public class CarroRestController {

	@Autowired
	private ICarroService service;

	private boolean isJSONValid(String jsonInString) {
		try {
			return new ObjectMapper().readTree(jsonInString) != null;
		} catch (IOException e) {
			return false;
		}
	}

	@SuppressWarnings("unchecked")
	private void parse(Marca marca, JSONObject json) {

		Map<String, Object> map = (Map<String, Object>) json.get("marca");

		Object id = map.get("id");
		if (id instanceof Integer) {
			marca.setId(((Integer) id).longValue());
		} else {
			marca.setId(((Long) id));
		}

		marca.setNome((String) map.get("nome"));
		marca.setOrigem((String) map.get("origem"));
	}

	private void parse(Carro carro, JSONObject json) {

		Object id = json.get("id");
		if (id != null) {
			if (id instanceof Integer) {
			 carro.setId(((Integer) id).longValue());
			} else {
			 carro.setId(((Long) id));
			}
		}

		carro.setModelo((String) json.get("modelo"));
		carro.setCor((String) json.get("cor"));
		carro.setAno((Integer) json.get("ano"));
		Double value = (Double) json.get("preco");
		carro.setPreco(BigDecimal.valueOf(value));

		Marca marca = new Marca();
		parse(marca, json);
		carro.setMarca(marca);
	}

	@GetMapping(path = "/carros")
	public ResponseEntity<List<Carro>> lista() {
		List<Carro> lista = service.buscarTodos();
		if (lista.isEmpty()) {
			return ResponseEntity.notFound().build();
		}
		return ResponseEntity.ok(lista);
	}

	@GetMapping(path = "/carros/{id}")
	public ResponseEntity<Carro> lista(@PathVariable("id") long id) {
		Carro livro = service.buscarPorId(id);
		if (livro == null) {
			return ResponseEntity.notFound().build();
		}
		return ResponseEntity.ok(livro);
	}
	
	@PostMapping(path = "/carros")
	@ResponseBody
	public ResponseEntity<Carro> cria(@RequestBody JSONObject json) {
		try {
			if (isJSONValid(json.toString())) {
				Carro carro = new Carro();
				parse(carro, json);
				service.salvar(carro);
				return ResponseEntity.ok(carro);
			} else {
				return ResponseEntity.badRequest().body(null);
			}
		} catch (Exception e) {
			e.printStackTrace();
			return ResponseEntity.status(HttpStatus.UNPROCESSABLE_ENTITY).body(null);
		}
	}

	@PutMapping(path = "/carros/{id}")
	public ResponseEntity<Carro> atualiza(@PathVariable("id") long id, @RequestBody JSONObject json) {
		try {
			if (isJSONValid(json.toString())) {
				Carro carro = service.buscarPorId(id);
				if (carro == null) {
					return ResponseEntity.notFound().build();
				} else {
					parse(carro, json);
					service.salvar(carro);
					return ResponseEntity.ok(carro);
				}
			} else {
				return ResponseEntity.badRequest().body(null);
			}
		} catch (Exception e) {
			return ResponseEntity.status(HttpStatus.UNPROCESSABLE_ENTITY).body(null);
		}
	}

	@DeleteMapping(path = "/carros/{id}")
	public ResponseEntity<Boolean> remove(@PathVariable("id") long id) {

		Carro livro = service.buscarPorId(id);
		if (livro == null) {
			return ResponseEntity.notFound().build();
		} else {
			service.excluir(id);
			return ResponseEntity.noContent().build();
		}
	}
}
