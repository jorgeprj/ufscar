package br.ufscar.dc.dsw.conversor;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.core.convert.converter.Converter;
import org.springframework.stereotype.Component;

import br.ufscar.dc.dsw.domain.Marca;
import br.ufscar.dc.dsw.service.spec.IMarcaService;

@Component
public class MarcaConversor implements Converter<String, Marca>{

	@Autowired
	private IMarcaService service;
	
	@Override
	public Marca convert(String text) {
		
		if (text.isEmpty()) {
		 return null;	
		}
		
		Long id = Long.valueOf(text);	
		return service.buscarPorId(id);
	}
}
