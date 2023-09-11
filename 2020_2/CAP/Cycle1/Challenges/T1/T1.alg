Algoritmo "Desafio Proposto 1"

// Seção de Declarações das variáveis 
Var
    altura,caminhada,angulo_inicial,angulo_final,tan1,tan2,tan3:real
    x:real
    angulo_rad1,angulo_rad2:real

// Seção de Comandos, procedimento, funções, operadores, etc... 
Inicio
    escreva("Digite o angulo inicial (em graus):")
    leia(angulo_inicial)
    escreva("Digite quantos metros foram caminhados em direção ao morro:")
    leia(caminhada)
    escreva("Digite o ângulo pós a caminhada:")
    leia(angulo_final)
//Definindo as tangentes
    angulo_rad1<-graupRad(angulo_inicial)
    angulo_rad2<-graupRad(angulo_final)
    tan1<-tan(angulo_rad1)
    tan2<-tan(angulo_rad2)
    tan3<-tan2-tan1
//Altura do morro
    x<-caminhada/tan3
    altura<-x+caminhada
    escreval("A altura do morro é aproximadamente:",altura," metros.")
Fimalgoritmo