// Exercicio Proposto 09

// Escreva um algoritmo que leia três valores inteiros e diferentes 
// e mostre-os em ordem decrescente.


Algoritmo "Exercicio Proposto 09"

// Seção de Declarações das variáveis
Var
    x,y,z:inteiro

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
//Coletando dados do usuário
    escreval ("Digite o primeiro número:")
    leia(x)
    escreval ("Digite o segundo número:")
    leia(y)
    escreval ("Digite o terceiro número:")
    leia(z)
//Definindo a ordem
//Caso 1
    se (x > y) entao
        se (x > z) entao
            se (y > z) entao
                escreval ("A ordem é:",x,",",y,",",z,".")
            senao
                escreval ("A ordem é:",x,",",z,",",y,".")
            fimse
        fimse
    fimse
//Caso 2
    se (x < y) entao
        se (y > z) entao
            se (x > z) entao
                escreval ("A ordem é:",y,",",x,",",z,".")
            senao
                escreval ("A ordem é:",y,",",z,",",x,".")
            fimse
        fimse
    fimse
//Caso 3
    se (x < y) entao
        se (y < z) entao
            escreval ("A ordem é:",z,",",y,",",x,".")
        fimse
    fimse
//Caso 4
    se (x > y) entao
        se (x < z) entao
            escreval ("A ordem é:",z,",",x,",",y,".")
        fimse
    fimse
fimalgoritmo