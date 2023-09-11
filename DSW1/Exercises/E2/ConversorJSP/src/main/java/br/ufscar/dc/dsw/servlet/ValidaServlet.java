package br.ufscar.dc.dsw.servlet;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet(name = "ValidaServlet", urlPatterns = {"/valida"})
public class ValidaServlet extends HttpServlet {

    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        try (PrintWriter out = response.getWriter()) {
            
            try {
                Integer.parseInt(request.getParameter("min"));
                Integer.parseInt(request.getParameter("max"));
                Integer.parseInt(request.getParameter("inc"));
                request.getRequestDispatcher("/conversor.jsp").forward(request, response);

            } catch(NumberFormatException e) {
                response.sendRedirect("erro.html");
            }
        }
    }

    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }
}