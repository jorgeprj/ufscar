// Exercicio Proposto 05

// Faça um algoritmo em VisuAlg para ler três notas de um aluno e imprimir 
// sua média ponderada (as notas tem pesos respectivos de 1, 2 e 3). 
// Pesquisar como calcular a média ponderada.


Algoritmo "Exercicio_Proposto_05"

Var
// Seção de Declarações das variáveis 
nota1,nota2,nota3,media:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva("Digite a nota 1:")
leia(nota1)
escreva("Digite a nota 2:")
leia(nota2)
escreva("Digite a nota 3:")
leia(nota3)
//Cálculo da média
media<-(nota1*1+nota2*2+nota3*3)/6
escreva("A média ponderada é:",media)
Fimalgoritmo