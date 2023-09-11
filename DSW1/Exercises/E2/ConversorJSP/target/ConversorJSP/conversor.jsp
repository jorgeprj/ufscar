<%@page contentType="text/html"%>
<%@page pageEncoding="UTF-8"%>
<%@taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c"%>
<%@ page isELIgnored="false"%>
<html>
    <head>
        <title>Conversor</title>
    </head>
    <body>

        <jsp:useBean id="calc" class="br.ufscar.dc.dsw.bean.Conversor" />

        <c:choose>
            <c:when test="${empty param.min}">
                <c:set var="min" value="-100"/>
            </c:when>
            <c:otherwise>
                <c:set var="min" value="${param.min}"/>
            </c:otherwise>
        </c:choose>

        <c:choose>
            <c:when test="${empty param.max}">
                <c:set var="max" value="100"/>
            </c:when>
            <c:otherwise>
                <c:set var="max" value="${param.max}"/>
            </c:otherwise>
        </c:choose>

        <c:choose>
            <c:when test="${empty param.inc}">
                <c:set var="inc" value="5"/>
            </c:when>
            <c:otherwise>
                <c:set var="inc" value="${param.inc}"/>
            </c:otherwise>
        </c:choose>

        <jsp:setProperty name="calc" property="min" value="${min}"/>
        <jsp:setProperty name="calc" property="max" value="${max}"/>
        <jsp:setProperty name="calc" property="inc" value="${inc}"/>

        <table border="1" style="width: 100%;">
            <thead>
                <tr>
                    <th style="height: 50px;">Celsius</th>
                    <th style="height: 50px;">Fahrenheit</th>
                </tr>
            </thead>
            <tbody>
                <% 
                    int min = Integer.parseInt(request.getParameter("min"));
                    int max = Integer.parseInt(request.getParameter("max"));
                    int inc = Integer.parseInt(request.getParameter("inc"));
    
                    for (int value = min; value <= max; value += inc) {
                %>
                <tr>
                    <td><%= value %></td>
                    <td><%= value * 1.80 + 32 %></td>
                </tr>
                <% } %>
            </tbody>
        </table>
    
    </body>
    </html>