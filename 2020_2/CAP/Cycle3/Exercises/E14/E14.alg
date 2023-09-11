Algoritmo "Exercicio Proposto 14"

// Seção de Declarações das variáveis
Var
    anterior,atual,proximo,c,limite:Inteiro

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
//Definindo o limite
    escreva("Digite o limite da Sequência de Fibonacci:")
    leia(limite)
//Definindo a sequencia de fibonacci
    anterior<-0
    atual<-1
    proximo<-1
    para c de 1 ate limite faca
        escreval(proximo)
        proximo<-atual+anterior
        anterior<-atual
        atual<-proximo
    fimpara
fimalgoritmo