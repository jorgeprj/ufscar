package br.ufscar.dc.dsw.service.impl;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import br.ufscar.dc.dsw.dao.IMarcaDAO;
import br.ufscar.dc.dsw.domain.Marca;
import br.ufscar.dc.dsw.service.spec.IMarcaService;

@Service
@Transactional(readOnly = false)
public class MarcaService implements IMarcaService {

	@Autowired
	IMarcaDAO dao;
	
	public void salvar(Marca marca) {
		dao.save(marca);
	}

	public void excluir(Long id) {
		dao.deleteById(id);
	}

	@Transactional(readOnly = true)
	public Marca buscarPorId(Long id) {
		return dao.findById(id.longValue());
	}

	@Transactional(readOnly = true)
	public List<Marca> buscarTodos() {
		return dao.findAll();
	}
	
	@Transactional(readOnly = true)
	public boolean marcaTemCarros(Long id) {
		return !dao.findById(id.longValue()).getCarros().isEmpty(); 
	}
}
