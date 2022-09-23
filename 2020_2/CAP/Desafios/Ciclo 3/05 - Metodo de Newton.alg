// Desafio Proposto 5

// Newton descobriu um método para aproximar os valores das raízes de uma equação numérica, 
// aplicável tanto para equações algébricas como para equações transcendentes. A variante desse 
// método, hoje conhecido como Método de Newton, diz o seguinte:

// "Se f (x) = 0 tem apenas uma raiz no intervalo [a, b] e se nem f '(x) nem f "(x) se anulam 
// nesse intervalo, escolhido x0 como aquele dos dois números a e b para o qual f (x) e f" (x) 
// tem mesmo sinal, então:

// x(k+1)=x(k)−f(xk)/f´(xk)


// Do ponto de vista prático, deseja-se obter a raiz quadrada de um número a, ou seja, 
// x=√a. Se elevarmos ambos os lados ao quadrado, temos: x^2=a. De acordo com o verificado 
// na teoria, f(p) = 0. Para isso, podemos fazer x^2−a=0.  Essa é uma equação de segundo 
// grau e sabemos que a derivada será: 2.x.  Portanto,  teremos:

// x(k+1)=x(k)−x(2k−a)/2xk

// Podemos assumir que uma boa aproximação para o valor de x_0 (primeira aproximação) seja a2.  

// Para um exemplo simples, vamos tentar descobrir a 3–√.  Sabemos que a primeira 
// aproximação será x0=32=1,5.  Assim, temos: 

// x1=x0−x2−a2.(a)=1,5−(1,5)2−32.(1,5)
// x1=1,5−1,522−32.(1,5)=1,5−2,25−33=1,5−−0,753
// x1=1,75

// Essa é uma primeira aproximação melhor que 1,5. Tínhamos que 1,52 = 2,25. 
// Agora temos: 1,752 = 3,06.

// Agora podemos repetir o processo n vezes até chegarmos a um valor R que resulte em um erro < ξ.  
// Seu primeiro desafio será fazer um algoritmo que leia um número inteiro positivo (N) e 
// apresente a raiz R que proporcione um erro < 0,01.  Compare o resultado obtido pelo algoritmo 
// que você elaborou com o resultado obtido pela função matemática pré-definida no VisuAlg 
// para o cálculo da raiz quadrada


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