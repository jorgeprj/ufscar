package br.ufscar.dc.dsw.domain;

import java.math.BigDecimal;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.Table;
import javax.validation.constraints.NotBlank;
import javax.validation.constraints.NotNull;
import javax.validation.constraints.Size;

@SuppressWarnings("serial")
@Entity
@Table(name = "Carro")
public class Carro extends AbstractEntity<Long> {

	@NotBlank(message = "{NotBlank.carro.modelo}")
	@Size(max = 60)
	@Column(nullable = false, length = 60)
	private String modelo;

	@NotBlank(message = "{NotBlank.carro.cor}")
	@Size(max = 60)
	@Column(nullable = false, length = 60)
	private String cor;
    
	@NotNull(message = "{NotNull.carro.ano}")
	@Column(nullable = false, length = 5)
	private Integer ano;
	
	@NotNull(message = "{NotNull.carro.preco}")
	@Column(nullable = false, columnDefinition = "DECIMAL(8,2) DEFAULT 0.0")
	private BigDecimal preco;
    
	@NotNull(message = "{NotNull.carro.marca}")
	@ManyToOne
	@JoinColumn(name = "marca_id")
	private Marca marca;

	public String getModelo() {
		return modelo;
	}

	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public String getCor() {
		return cor;
	}

	public void setCor(String cor) {
		this.cor = cor;
	}

	public Integer getAno() {
		return ano;
	}

	public void setAno(Integer ano) {
		this.ano = ano;
	}

	public BigDecimal getPreco() {
		return preco;
	}

	public void setPreco(BigDecimal preco) {
		this.preco = preco;
	}

	public Marca getMarca() {
		return marca;
	}

	public void setMarca(Marca marca) {
		this.marca = marca;
	}
}
