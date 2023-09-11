package br.ufscar.dc.dsw.service.spec;

import java.util.List;

import br.ufscar.dc.dsw.domain.Marca;

public interface IMarcaService {

	Marca buscarPorId(Long id);

	List<Marca> buscarTodos();

	void salvar(Marca marca);

	void excluir(Long id);
	
	boolean marcaTemCarros(Long id);
}
