package br.ufscar.dc.dsw.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

import br.ufscar.dc.dsw.domain.Marca;

public class MarcaDAO extends GenericDAO {

    public List<Marca> getAll() {

        List<Marca> listaMarcas = new ArrayList<>();

        String sql = "SELECT * from Marca";

        try {
            Connection conn = this.getConnection();
            Statement statement = conn.createStatement();

            ResultSet resultSet = statement.executeQuery(sql);
            while (resultSet.next()) {
                Long id = resultSet.getLong("id");
                String origem = resultSet.getString("origem");
                                String nome = resultSet.getString("nome");
                Marca marca = new Marca(id, origem, nome);
                listaMarcas.add(marca);
            }

            resultSet.close();
            statement.close();
            conn.close();
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return listaMarcas;
    }

    public Marca get(Long id) {
        Marca marca = null;
        
        String sql = "SELECT * from Marca where id = ?";

        try {
            Connection conn = this.getConnection();
            PreparedStatement statement = conn.prepareStatement(sql);
            
            statement.setLong(1, id);
            ResultSet resultSet = statement.executeQuery();
            if (resultSet.next()) {
                String origem = resultSet.getString("origem");
                                String nome = resultSet.getString("nome");
                marca = new Marca(id, origem, nome);
            }

            resultSet.close();
            statement.close();
            conn.close();
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return marca;
    }
}
