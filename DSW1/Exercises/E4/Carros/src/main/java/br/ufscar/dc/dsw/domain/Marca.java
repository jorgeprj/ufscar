package br.ufscar.dc.dsw.domain;

public class Marca {

    private Long id;
    private String origem;
    private String nome;

    public Marca(Long id) {
        this.id = id;
    }

    public Marca(String origem, String nome) {
        this.origem = origem;
        this.nome = nome;
    }

    public Marca(Long id, String origem, String nome) {
        this(origem, nome);
        this.id = id;
    }

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public String getOrigem() {
        return origem;
    }

    public void setOrigem(String origem) {
        this.origem = origem;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
}