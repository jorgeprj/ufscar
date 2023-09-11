Algoritmo "Exercicio Proposto 11"

// Seção de Declarações das variáveis
Var
    c,i,n,p: inteiro

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
    escreva("Os 40 primeiros números primos são:")

//Definindo os números primos
    para c de 1 ate 175 faca
        p<-0
        para i de 1 ate 175 faca
            se(c mod i=0)entao
                p<-p+1
            fimse
        fimpara
        se(p=2)então
            escreva(C)
        fimse
    fimpara
Fimalgoritmo