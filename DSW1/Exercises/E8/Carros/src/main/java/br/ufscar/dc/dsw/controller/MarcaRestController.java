package br.ufscar.dc.dsw.controller;

import java.io.IOException;
import java.util.List;

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
import br.ufscar.dc.dsw.service.spec.IMarcaService;

@RestController
public class MarcaRestController {

	@Autowired
	private IMarcaService service;

	private boolean isJSONValid(String jsonInString) {
		try {
			return new ObjectMapper().readTree(jsonInString) != null;
		} catch (IOException e) {
			return false;
		}
	}

	private void parse(Marca marca, JSONObject json) {

		Object id = json.get("id");
		if (id != null) {
			if (id instanceof Integer) {
				marca.setId(((Integer) id).longValue());
			} else {
				marca.setId((Long) id);
			}
		}

		marca.setNome((String) json.get("nome"));
		marca.setOrigem((String) json.get("origem"));
	}

	@GetMapping(path = "/marcas")
	public ResponseEntity<List<Marca>> lista() {
		List<Marca> lista = service.buscarTodos();
		if (lista.isEmpty()) {
			return ResponseEntity.notFound().build();
		}
		return ResponseEntity.ok(lista);
	}

	@GetMapping(path = "/marcas/{id}")
	public ResponseEntity<Marca> lista(@PathVariable("id") long id) {
		Marca marca = service.buscarPorId(id);
		if (marca == null) {
			return ResponseEntity.notFound().build();
		}
		return ResponseEntity.ok(marca);
	}

	@PostMapping(path = "/marcas")
	@ResponseBody
	public ResponseEntity<Marca> cria(@RequestBody JSONObject json) {
		try {
			if (isJSONValid(json.toString())) {
				Marca marca = new Marca();
				parse(marca, json);
				service.salvar(marca);
				return ResponseEntity.ok(marca);
			} else {
				return ResponseEntity.badRequest().body(null);
			}
		} catch (Exception e) {
			e.printStackTrace();
			return ResponseEntity.status(HttpStatus.UNPROCESSABLE_ENTITY).body(null);
		}
	}

	@PutMapping(path = "/marcas/{id}")
	public ResponseEntity<Marca> atualiza(@PathVariable("id") long id, @RequestBody JSONObject json) {
		try {
			if (isJSONValid(json.toString())) {
				Marca marca = service.buscarPorId(id);
				if (marca == null) {
					return ResponseEntity.notFound().build();
				} else {
					parse(marca, json);
					service.salvar(marca);
					return ResponseEntity.ok(marca);
				}
			} else {
				return ResponseEntity.badRequest().body(null);
			}
		} catch (Exception e) {
			return ResponseEntity.status(HttpStatus.UNPROCESSABLE_ENTITY).body(null);
		}
	}

	@DeleteMapping(path = "/marcas/{id}")
	public ResponseEntity<Boolean> remove(@PathVariable("id") long id) {

		Marca marca = service.buscarPorId(id);
		if (marca == null) {
			return ResponseEntity.notFound().build();
		} else {
			if (service.marcaTemCarros(id)) {
				return new ResponseEntity<Boolean>(false, HttpStatus.FORBIDDEN);
			} else {
				service.excluir(id);
				return new ResponseEntity<Boolean>(true, HttpStatus.OK);
			}
		}
	}
}
