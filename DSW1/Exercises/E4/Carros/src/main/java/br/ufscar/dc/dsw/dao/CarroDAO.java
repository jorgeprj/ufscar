package br.ufscar.dc.dsw.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

import br.ufscar.dc.dsw.domain.Marca;
import br.ufscar.dc.dsw.domain.Carro;

public class CarroDAO extends GenericDAO {

    public void insert(Carro carro) {

        String sql = "INSERT INTO Carro (modelo, cor, ano, preco, marca_id) VALUES (?, ?, ?, ?, ?)";

        try {
            Connection conn = this.getConnection();
            PreparedStatement statement = conn.prepareStatement(sql);

            statement.setString(1, carro.getModelo());
            statement.setString(2, carro.getCor());
            statement.setInt(3, carro.getAno());
            statement.setFloat(4, carro.getPreco());
            statement.setLong(5, carro.getMarca().getId());
            statement.executeUpdate();

            statement.close();
            conn.close();
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }

    public List<Carro> getAll() {

        List<Carro> listaCarros = new ArrayList<>();

        String sql = "SELECT * from Carro c, Marca e where c.MARCA_ID = e.ID order by c.id";

        try {
            Connection conn = this.getConnection();
            Statement statement = conn.createStatement();

            ResultSet resultSet = statement.executeQuery(sql);
            while (resultSet.next()) {
                Long id = resultSet.getLong("id");
                String modelo = resultSet.getString("modelo");
                String cor = resultSet.getString("cor");
                int ano = resultSet.getInt("ano");
                float preco = resultSet.getFloat("preco");
                Long marca_id = resultSet.getLong(6);
                String origem = resultSet.getString("origem");
                String nome = resultSet.getString("nome");
                Marca marca = new Marca(marca_id, origem, nome);
                Carro carro = new Carro(id, modelo, cor, ano, preco, marca);
                listaCarros.add(carro);
            }

            resultSet.close();
            statement.close();
            conn.close();
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return listaCarros;
    }

    public void delete(Carro carro) {
        String sql = "DELETE FROM Carro where id = ?";

        try {
            Connection conn = this.getConnection();
            PreparedStatement statement = conn.prepareStatement(sql);

            statement.setLong(1, carro.getId());
            statement.executeUpdate();

            statement.close();
            conn.close();
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }

    public void update(Carro carro) {
        String sql = "UPDATE Carro SET modelo = ?, cor = ?, ano = ?, preco = ?";
        sql += ", marca_id = ? WHERE id = ?";

        try {
            Connection conn = this.getConnection();
            PreparedStatement statement = conn.prepareStatement(sql);

            statement.setString(1, carro.getModelo());
            statement.setString(2, carro.getCor());
            statement.setInt(3, carro.getAno());
            statement.setFloat(4, carro.getPreco());
            statement.setFloat(5, carro.getMarca().getId());
            statement.setLong(6, carro.getId());
            statement.executeUpdate();

            statement.close();
            conn.close();
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }

    public Carro get(Long id) {
        Carro carro = null;

        String sql = "SELECT * from Carro c, Marca e where c.id = ? and c.MARCA_ID = e.ID";

        try {
            Connection conn = this.getConnection();
            PreparedStatement statement = conn.prepareStatement(sql);

            statement.setLong(1, id);
            ResultSet resultSet = statement.executeQuery();
            if (resultSet.next()) {
                String modelo = resultSet.getString("modelo");
                String cor = resultSet.getString("cor");
                int ano = resultSet.getInt("ano");
                float preco = resultSet.getFloat("preco");

                Long marcaID = resultSet.getLong("marca_id");
                Marca marca = new MarcaDAO().get(marcaID);

                carro = new Carro(id, modelo, cor, ano, preco, marca);
            }

            resultSet.close();
            statement.close();
            conn.close();
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return carro;
    }
}
