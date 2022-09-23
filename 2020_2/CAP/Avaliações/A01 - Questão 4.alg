// Questão 4

// Suponha que você tenha o seguinte problema: elaborar um algoritmo para 
// calcular a distância entre dois pontos A e B. E suponha que você tenha ido procurar 
// suas anotações nos cadernos de matemática e encontrou o desenho ao lado com uma fórmula.  
// Assumindo que as funções raiz(A) calcula a raiz do valor A e que elevado(B,Pot) faz o 
// cálculo BPot , resolva o problema de elaborar o algoritmo para cálculo da distância 
// entre dois pontos A e B.


Algoritmo "Avaliação Ciclo 1 - Questão 4"

// Seção de Declarações das variáveis 
Var
    x1,x2,y1,y2:real
    dx,dy:real
    distancia:real

// Seção de Comandos, procedimento, funções, operadores, etc... 
Inicio
// Dados do usuário
    escreva("Digite o x1:")
    leia(x1)
    escreva("Digite o y1:")
    leia(y1)
    escreva("Digite o x2:")
    leia(x2)
    escreva("Digite o y2:")
    leia(y2)
// Cálculo
    dx<-x2-x1 //Delta x
    dy<-y2-y1 //Delta y
    distancia<-raizQ((dx^2)+(dy^2))//Formula
    escreval("A distância entre os pontos é de:",distancia)
Fimalgoritmo