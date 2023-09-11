// Seção de Declarações das variáveis 
Var
    metros,decolagem,altura:real
    x,y:real

// Seção de Comandos, procedimento, funções, operadores, etc...  
Inicio
    escreva("Digite a quantidade de metros sobrevoada:")
    leia(metros)
    escreva("Digite o angulo de decolagem (em graus):")
    leia(decolagem)
//Cálculo da altura sobrevoada
    x<-graupRad(decolagem)
    y<-sen(x)
    altura<-y*metros
    escreva("O avião atingiu:",altura," metros")
Fimalgoritmo