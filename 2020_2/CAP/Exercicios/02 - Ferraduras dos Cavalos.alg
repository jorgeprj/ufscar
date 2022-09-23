// Exercicio Proposto 02

// Faça um algoritmo em VisuAlg para calcular quantas ferraduras é preciso comprar 
// para trocar todas as ferraduras dos cavalos de um haras.


Algoritmo "Exercicio_Proposto_02"

Var
// Seção de Declarações das variáveis 
cavalos,estoque,compra,ferraduras:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva("Digite a quantidade de cavalos:")
leia(cavalos)
escreva("Digite a quantidade de ferraduras no estoque:")
leia(estoque)
// Cálculo da quantidade de ferraduras necessárias
ferraduras<-4*cavalos
//Cálculo da quantidade que precisa ser comprada
compra<-ferraduras-estoque
escreva("É necessário a compra de ",compra)
escreva(" ferraduras para trocar todas as ferraduras dos cavalos.")
Fimalgoritmo