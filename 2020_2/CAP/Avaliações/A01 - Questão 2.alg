// Questão 2

// Considere que você deseja fazer um algoritmo para calcular a área de um trapézio e 
// conseguiu encontrar nos cadernos de escola as anotações que aprendeu sobre o assunto 
// (ver figura).  A partir dessas anotações e dos conhecimentos adquiridos com a disciplina 
// de Construção de Algoritmos e Programação, faça o algoritmo para o cálculo da área de 
// um trapézio.  


Algoritmo "Avaliação Ciclo 1 - Questão 2"

// Seção de Declarações das variáveis 
Var
    bmaior,bmenor,altura,area:real

// Seção de Comandos, procedimento, funções, operadores, etc... 
Inicio
// Dados do usuário
    escreva("Digite o tamanho da base maior:")
    leia(bmaior)
    escreva("Digite o tamanho da base menor:")
    leia(bmenor)
    escreva("Digite a altura:")
    leia(altura)
// Cálculo
    area<-(((bmaior+bmenor)/2)*altura)
    escreva("A área do trapézio é",area)
Fimalgoritmo