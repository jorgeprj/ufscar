<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<%@ page isELIgnored="false"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c"%>

<table border="1">
	<caption>
		<c:choose>
			<c:when test="${carro != null}">
                            Edição
                        </c:when>
			<c:otherwise>
                            Cadastro
                        </c:otherwise>
		</c:choose>
	</caption>
	<c:if test="${carro != null}">
		<input type="hidden" name="id" value="${carro.id}" />
	</c:if>
	<tr>
		<td><label for="modelo">Modelo</label></td>
		<td><input type="text" id="modelo" name="modelo" size="45"
			required value="${carro.modelo}" /></td>
	</tr>
	<tr>
		<td><label for="cor">cor</label></td>
		<td><input type="text" id="cor" name="cor" size="45" required
			value="${carro.cor}" /></td>
	</tr>
	<tr>
		<td><label for="marca">Marca</label></td>
		<td><select id="marca" name="marca">
				<c:forEach items="${marcas}" var="marca">
					<option value="${marca.key}"
						${carro.marca.nome==marca.value ? 'selected' : '' }>
						${marca.value}</option>
				</c:forEach>
		</select></td>
	</tr>
	<tr>
		<td><label for="ano">Ano</label></td>
		<td><input type="number" id="ano" name="ano" size="5" required
			min="1500" value="${carro.ano}" /></td>
	</tr>
	<tr>
		<td><label for="preco">Preço</label></td>
		<td><input type="number" id="preco" name="preco" required
			min="10000" step="any" size="5" value="${carro.preco}" /></td>
	</tr>
	<tr>
		<td colspan="2" align="center"><input type="submit" value="Salva" /></td>
	</tr>
</table>