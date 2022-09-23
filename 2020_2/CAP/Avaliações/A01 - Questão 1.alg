// Questão 1

// Muita gente compra dólares para se proteger da desvalorização do Real. Atualmente, 
// o dólar está cotado a R$ 5,67 (cotação de 04/03/2021 às 17h18).  Ou seja, US$ 1,00 
// compra R$ 5,67. Ou, de outra forma, são necessários R$ 5,67 para comprar US$ 1,00.  
// Faça um algoritmo em VisuAlg que obtenha do usuário a quantidade de reais disponíveis 
// para a compra de dólares e informe o total de dólares que é possível comprar com aquela 
// quantidade de reais.  

Algoritmo "Avaliação Ciclo 1 - Questão 1"

// Seção de Declarações das variáveis 
Var
    reais,dolares,valor:real

// Seção de Comandos, procedimento, funções, operadores, etc... 
Inicio
// Dados do usuário
    escreva("Digite quantos reais estão disponíveis para a compra de dólares:")
    leia(reais)
// Cálculo
    valor<-5.67
    dolares<-reais/valor
    escreval("É possivel comprar",dolares," dolares.")
Fimalgoritmo