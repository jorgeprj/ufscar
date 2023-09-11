<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<%@ page isELIgnored="false"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c"%>
<html>
<head>
<title>Loja de Carros</title>
</head>
<body>
	<div align="center">
		<h1>Gerenciamento de carros</h1>
		<h2>
			<a href="/${requestScope.contextPath}">Menu Principal</a> &nbsp;&nbsp;&nbsp; 
			<a href="/${requestScope.contextPath}/carros/cadastro">Adicione Novo Carro</a>
		</h2>
	</div>

	<div align="center">
		<table border="1">
			<caption>Lista de carros</caption>
			<tr>
				<th>ID</th>
				<th>Modelo</th>
				<th>Marca</th>
				<th>Cor</th>
				<th>Ano</th>
				<th>Preço</th>
				<th>Acões</th>
			</tr>
			<c:forEach var="carro" items="${requestScope.listaCarros}">
				<tr>
					<td>${carro.id}</td>
					<td>${carro.modelo}</td>
					<td>${carro.marca.nome}</td>
					<td>${carro.cor}</td>
					<td>${carro.ano}</td>
					<td>${carro.preco}</td>
					<td><a href="/${requestScope.contextPath}/carros/edicao?id=${carro.id}">Edição</a>
						&nbsp;&nbsp;&nbsp;&nbsp; <a
						href="/${requestScope.contextPath}/carros/remocao?id=${carro.id}"
						onclick="return confirm('Tem certeza de que deseja excluir este item?');">
							Remoção </a></td>
				</tr>
			</c:forEach>
		</table>
	</div>
</body>
</html>