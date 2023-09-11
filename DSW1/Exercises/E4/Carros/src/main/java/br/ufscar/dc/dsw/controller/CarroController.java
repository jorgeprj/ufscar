package br.ufscar.dc.dsw.controller;

import br.ufscar.dc.dsw.dao.MarcaDAO;
import br.ufscar.dc.dsw.dao.CarroDAO;
import br.ufscar.dc.dsw.domain.Marca;
import br.ufscar.dc.dsw.domain.Carro;

import java.io.IOException;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet(urlPatterns = "/carros/*")
public class CarroController extends HttpServlet {

    private static final long serialVersionUID = 1L;
    
    private CarroDAO dao;

    @Override
    public void init() {
        dao = new CarroDAO();
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException {
        doGet(request, response);
    }

    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException {
                
        String action = request.getPathInfo();
        if (action == null) {
            action = "";
        }

        try {
            switch (action) {
                case "/cadastro":
                    apresentaFormCadastro(request, response);
                    break;
                case "/insercao":
                    insere(request, response);
                    break;
                case "/remocao":
                    remove(request, response);
                    break;
                case "/edicao":
                    apresentaFormEdicao(request, response);
                    break;
                case "/atualizacao":
                    atualize(request, response);
                    break;
                default:
                    lista(request, response);
                    break;
            }
        } catch (RuntimeException | IOException | ServletException e) {
            throw new ServletException(e);
        }
    }

    private void lista(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        List<Carro> listaCarros = dao.getAll();
        request.setAttribute("listaCarros", listaCarros);
        request.setAttribute("contextPath", request.getContextPath().replace("/", ""));
        RequestDispatcher dispatcher = request.getRequestDispatcher("/carro/lista.jsp");
        dispatcher.forward(request, response);
    }

    private Map<Long, String> getMarcas() {
        Map <Long,String> marcas = new HashMap<>();
        for (Marca marca: new MarcaDAO().getAll()) {
            marcas.put(marca.getId(), marca.getNome());
        }
        return marcas;
    }
    
    private void apresentaFormCadastro(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        request.setAttribute("marcas", getMarcas());
        RequestDispatcher dispatcher = request.getRequestDispatcher("/carro/formulario.jsp");
        dispatcher.forward(request, response);
    }

    private void apresentaFormEdicao(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        Long id = Long.parseLong(request.getParameter("id"));
        Carro carro = dao.get(id);
        request.setAttribute("carro", carro);
        request.setAttribute("marcas", getMarcas());
        RequestDispatcher dispatcher = request.getRequestDispatcher("/carro/formulario.jsp");
        dispatcher.forward(request, response);
    }

    private void insere(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        request.setCharacterEncoding("UTF-8");
        
        String modelo = request.getParameter("modelo");
        String cor = request.getParameter("cor");
        Integer ano = Integer.parseInt(request.getParameter("ano"));
        Float preco = Float.parseFloat(request.getParameter("preco"));
        
        Long marcaID = Long.parseLong(request.getParameter("marca"));
        Marca marca = new MarcaDAO().get(marcaID);
        
        Carro carro = new Carro(modelo, cor, ano, preco, marca);
        dao.insert(carro);
        response.sendRedirect("lista");
    }

    private void atualize(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {

        request.setCharacterEncoding("UTF-8");
        Long id = Long.parseLong(request.getParameter("id"));
        String modelo = request.getParameter("modelo");
        String cor = request.getParameter("cor");
        Integer ano = Integer.parseInt(request.getParameter("ano"));
        Float preco = Float.parseFloat(request.getParameter("preco"));
        
        Long marcaID = Long.parseLong(request.getParameter("marca"));
        Marca marca = new MarcaDAO().get(marcaID);
        
        Carro carro = new Carro(id, modelo, cor, ano, preco, marca);
        dao.update(carro);
        response.sendRedirect("lista");
    }

    private void remove(HttpServletRequest request, HttpServletResponse response)
            throws IOException {
        Long id = Long.parseLong(request.getParameter("id"));

        Carro carro = new Carro(id);
        dao.delete(carro);
        response.sendRedirect("lista");
    }
}
