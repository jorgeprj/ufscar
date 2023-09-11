package br.ufscar.dc.dsw;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.Bean;

import br.ufscar.dc.dsw.dao.IEditoraDAO;
import br.ufscar.dc.dsw.dao.ILivroDAO;
import br.ufscar.dc.dsw.domain.Editora;
import br.ufscar.dc.dsw.domain.Livro;

@SpringBootApplication
public class LivrariaJpaApplication {

	private static final Logger log = LoggerFactory.getLogger(LivrariaJpaApplication.class);

	public static void main(String[] args) {
		SpringApplication.run(LivrariaJpaApplication.class, args);
	}

	@Bean
	public CommandLineRunner demo(ILivroDAO livroDAO, IEditoraDAO editoraDAO) {
		return (args) -> {

			Editora seg = new Editora("87.557.922/0001-82","Seguinte");
			log.info("Salvando Editora - Seguinte");
			editoraDAO.save(seg);

			Livro cur = new Livro("O Dia do Curinga","Jostein Gaarder",1996,29.99,seg);
			log.info("Salvando Livro - O Dia do Curinga");
			livroDAO.save(cur);

			// Recupere todos livros

			log.info("Livros recuperados -- findAll():");
			log.info("--------------------------------");
			for (Livro livro : livroDAO.findAll()) {
				log.info(livro.toString());
			}
			log.info("");

			// Recupere um livro por seu ID

			Livro livro = livroDAO.findById(1L);
			if (livro != null) {
				log.info("Livro recuperado -- findById(1L):");
				log.info("---------------------------------");
				log.info(livro.toString());
				log.info("");
			}
		};
	}

}
