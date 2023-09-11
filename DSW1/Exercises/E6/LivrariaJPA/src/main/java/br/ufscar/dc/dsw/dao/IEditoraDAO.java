package br.ufscar.dc.dsw.dao;

import java.util.List;
import org.springframework.data.repository.CrudRepository;
import br.ufscar.dc.dsw.domain.Editora;

public interface IEditoraDAO extends CrudRepository<Editora, Long>{
	List<Editora> findAll();
	Editora findById(long id);
	Editora save(Editora editora);
}