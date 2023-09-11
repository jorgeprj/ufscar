package br.ufscar.dc.dsw.dao;

import java.util.List;

import org.springframework.data.repository.CrudRepository;

import br.ufscar.dc.dsw.domain.Marca;

@SuppressWarnings("unchecked")
public interface IMarcaDAO extends CrudRepository<Marca, Long>{

	Marca findById(long id);
	
	Marca findByOrigem (String origem);

	List<Marca> findAll();
	
	Marca save(Marca editora);

	void deleteById(Long id);
}
