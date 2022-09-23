// Questão 3

// Na pandemia do corona vírus, ouve-se muito sobre a tendência de novos casos ou de 
// óbitos baseada em análises das médias móveis dos últimos 7 dias comparada com a média móvel 
// dos últimos 14 dias.  Para calcular a média móvel dos últimos 7 dias, basta somar o número 
// de casos ou mortes do dia com o dos 6 dias anteriores. Para saber a tendência, é preciso 
// calcular a variação percentual das médias móveis em um intervalo de 14 dias. Por exemplo, 
// a média móvel do dia 14 deve ser comparada com a média móvel do dia 1º. Se este percentual 
// for de até 15%, é considerado estável. Se for acima de 15% positivos, está em crescimento. 
// Se for mais de 15% negativos, está em queda.

// Dadas as explicações, elabore um algoritmo que leia a média móvel do dia e a média móvel de 
// 14 dias atrás e informe a tendência (estável, crescimento ou queda). 

// Exemplo: Se em um dia X a média móvel foi 93 e em X-14 a média móvel era 85, 
// então (93 - 85)/85 = 0.0941 x 100 = 9,41%  Estável!  Se ao invés de 93, o número de casos 
// do dia X fosse 50, então (50 - 85)/85 = -0,4117 x 100 = -41,17%  (queda).

Algoritmo "Avaliação Ciclo 2 - Questão 2"

// Seção de Declarações das variáveis
Var
    media1,media2,tendencia:real

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
    escreval("Digite a média móvel do dia:")
    leia(media1)
    escreval("Digite a media móvel de 14 dias atrás:")
    leia(media2)
//Cálculo
    tendencia<-((media1-media2)/media2)*100
    se (tendencia > 15) entao
        escreval("Crescimento!")
        senao
        se (tendencia <= 15) e (tendencia >= -15) entao
            escreval("Estável!")
        senao
            se (tendencia < -15) entao
            escreval("Queda!")
            fimse
        fimse
    fimse
Fimalgoritmo