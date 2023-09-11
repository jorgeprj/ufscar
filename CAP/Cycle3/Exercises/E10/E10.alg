Algoritmo "Exercicio Proposto 10"

// Seção de Declarações das variáveis
Var
    numero, cont, divisor: inteiro

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
// Dados do usuário
    escreval("Digite um número inteiro:")
    leia(numero)
//Definindo os divisores
    cont <-numero
    divisor<-0
    escreval("Os Divisores de ", numero, ": ")
    repita
        se(numero mod cont = 0) entao
            divisor<-divisor+1
            escreval(cont)
        fimse
        cont<-cont-1
    ate(cont < 1)
Fimalgoritmo