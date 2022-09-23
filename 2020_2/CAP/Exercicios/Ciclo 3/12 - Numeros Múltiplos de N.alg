// Exercicio Proposto 12

// Faça um algoritmo para informar os números múltiplos de 3 ou 8 que existem entre 10 e 320.


Algoritmo "Exercicio Proposto 12"

// Seção de Declarações das variáveis
Var
    i:Inteiro

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
    escreval("Os múltiplos de 3 ou 8 existem entre 10 e 320 são:")
//Definindo os números múltiplos
    i<-0
    para i de 10 até 320 faça
        Se (i mod 3 = 0)entao
            escreva(i)
        senão
            se (i mod 8 = 0)entao
                escreva(i)
                senão
            fimse
        fimse
    fimpara
fimalgoritmo