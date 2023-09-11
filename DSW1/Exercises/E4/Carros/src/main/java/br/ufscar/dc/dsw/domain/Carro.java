package br.ufscar.dc.dsw.domain;

public class Carro {

    private Long id;
    private String modelo;
    private String cor;
    private Integer ano;
    private Float preco;
    private Marca marca;

    public Carro(Long id) {
        this.id = id;
    }

    public Carro(String modelo, String cor, Integer ano, Float preco, Marca marca) {
        this.modelo = modelo;
        this.cor = cor;
        this.ano = ano;
        this.preco = preco;
        this.marca = marca;
    }

    public Carro(Long id, String modelo, String cor, Integer ano, Float preco, Marca marca) {
        this(modelo, cor, ano, preco, marca);
        this.id = id;
    }

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

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

    public Float getPreco() {
        return preco;
    }

    public void setPreco(Float preco) {
        this.preco = preco;
    }

    public Marca getMarca() {
        return marca;
    }

    public void setMarca(Marca marca) {
        this.marca = marca;
    }
}
