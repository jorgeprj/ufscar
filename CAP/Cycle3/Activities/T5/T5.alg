Algoritmo "Desafio Proposto 5"

// Seção de Declarações das variáveis
Var
    numero:inteiro
    x,x0,x1,x_ideal,x2,erro:real
    fx,fxx:real
    raiz1,raiz2:real

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
    escreval("Digite um número inteiro positivo:")
    leia(numero)
    escreval("Digite a primeira aproximação:")
    leia(x0)
    erro<-0.01
//Calculo
    x<-x0
    fx<-(x^2)-numero
    fxx<-2*x
    x1<-x0-(fx/fxx)
    x_ideal<-x1-x0
//
    se x_ideal<0 entao
        x_ideal<-x_ideal*-1
    senao
        x_ideal<-x_ideal*1
    fimse
//
//
//
    REPITA
        x<-x1
        fx<-(x^2)-numero
        fxx<-2*x
        x2<-x1-(fx/fxx)
        x_ideal<-x2-x1
//
        se x_ideal<0 entao
            x_ideal<-x_ideal*-1
        senao
            x_ideal<-x_ideal*1
        fimse
//
        x1<-x2
        x2<-0
    ATE x_ideal < erro
//Comparação
    raiz1<-RaizQ(numero)
    raiz2<-x1
    escreval("--------------------------------------------------------------------")
    escreval("O resultado do algoritmo é:")
    escreval("|Resultado obtido pela máquina:",raiz1,"|")
    escreva("|Resultado obtido pelo algoritmo que proporciona um erro <0.01 :")
    escreva(raiz2,"|")
Fimalgoritmo