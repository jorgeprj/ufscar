package br.ufscar.dc.dsw;

import java.math.BigDecimal;

import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.Bean;
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;

import br.ufscar.dc.dsw.dao.IMarcaDAO;
import br.ufscar.dc.dsw.dao.ICarroDAO;
import br.ufscar.dc.dsw.dao.IUsuarioDAO;
import br.ufscar.dc.dsw.domain.Marca;
import br.ufscar.dc.dsw.domain.Carro;
import br.ufscar.dc.dsw.domain.Usuario;

@SpringBootApplication
public class CarrosMvcApplication {

	public static void main(String[] args) {
		SpringApplication.run(CarrosMvcApplication.class, args);
	}

	@Bean
	public CommandLineRunner demo(IUsuarioDAO usuarioDAO, BCryptPasswordEncoder encoder, IMarcaDAO marcaDAO, ICarroDAO carroDAO) {
		return (args) -> {
			
			Usuario u1 = new Usuario();
			u1.setUsername("admin");
			u1.setPassword(encoder.encode("admin"));
			u1.setCPF("012.345.678-90");
			u1.setName("Administrador");
			u1.setRole("ROLE_ADMIN");
			u1.setEnabled(true);
			usuarioDAO.save(u1);
			
			Usuario u2 = new Usuario();
			u2.setUsername("beltrano");
			u2.setPassword(encoder.encode("123"));
			u2.setCPF("985.849.614-10");
			u2.setName("Beltrano Andrade");
			u2.setRole("ROLE_USER");
			u2.setEnabled(true);
			usuarioDAO.save(u2);
			
			Usuario u3 = new Usuario();
			u3.setUsername("fulano");
			u3.setPassword(encoder.encode("123"));
			u3.setCPF("367.318.380-04");
			u3.setName("Fulano Silva");
			u3.setRole("ROLE_USER");
			u3.setEnabled(true);
			usuarioDAO.save(u3);
			
			Marca m1 = new Marca();
			m1.setOrigem("Itália");
			m1.setNome("Fiat");
			marcaDAO.save(m1);

			Marca m2 = new Marca();
			m2.setOrigem("Estados Unidos");
			m2.setNome("Chevrolet");
			marcaDAO.save(m2);

			Marca m3 = new Marca();
			m3.setOrigem("França");
			m3.setNome("Renault");
			marcaDAO.save(m3);
		
			
			Carro c1 = new Carro();
			c1.setModelo("Uno");
			c1.setCor("Vermelho");
			c1.setAno(2015);
			c1.setPreco(BigDecimal.valueOf(54000.0));
			c1.setMarca(m1);
			carroDAO.save(c1);

			Carro c2 = new Carro();
			c2.setModelo("Onix");
			c2.setCor("Prata");
			c2.setAno(2024);
			c2.setPreco(BigDecimal.valueOf(84850.0));
			c2.setMarca(m2);
			carroDAO.save(c2);

			Carro c3 = new Carro();
			c3.setModelo("Logan");
			c3.setCor("Preto");
			c3.setAno(2018);
			c3.setPreco(BigDecimal.valueOf(97172.2));
			c3.setMarca(m3);
			carroDAO.save(c3);
		
		};
	}
}
