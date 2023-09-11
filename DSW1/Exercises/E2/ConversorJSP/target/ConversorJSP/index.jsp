<%@page contentType="text/html"%>
<%@page pageEncoding="UTF-8"%>
<%@ taglib prefix="fmt" uri="http://java.sun.com/jsp/jstl/fmt" %>
<%@ page isELIgnored="false"%>
<html>
    <head>
        <title>Conversor</title>
    </head>
    <body>

        <a href="mudaLingua?lingua=pt"><img src="images/Brasil.gif" width="20"></a>
        <a href="mudaLingua?lingua=en"><img src="images/EstadosUnidos.gif" width="20"></a>
        
        <jsp:useBean id="now" class="java.util.Date" />
        <h4>
            <fmt:formatDate value="${now}" dateStyle="full"/> &#149;
            <fmt:formatDate value="${now}" type="time"/>
        </h4>

        

        <fmt:bundle basename="i18n.Messages">
            <form name="entry" action="valida" method="POST">
                <fmt:message key="min"/>
                <br/>
                <input type ="number" name="min" value="-100" min="-100" max="100">
                <br/> <br/>

                <fmt:message key="max"/>
                <br/>
                <input type ="number" name="max" value="100" min="-100" max="100">
                <br/> <br/>

                <fmt:message key="inc"/>
                <br/>
                <input type ="number" name="inc" value="5" min="1" max="10">
                <br/> <br/>

                <input type="reset" name="reset" value="<fmt:message key="reset"/>">

                <input type="submit" name="submit" value="<fmt:message key="submit"/>">
            </form>
        </fmt:bundle>
    </body>
</html>