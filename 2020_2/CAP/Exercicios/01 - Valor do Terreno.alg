// Exercicio Proposto 01

// Uma imobiliária apresenta os preços dos terrenos que vende por área em metros quadrados. 
// Por exemplo, um terreno de 10 x 10 tem 100 metros quadrados e está situado em um baixo cujo 
// preço por metro quadrado é de R$ 202,00. Então, para esse caso, o cliente deverá pagar 
// R$ 20.200,00 pelo terreno.  Mas, é claro, que cada região pode ter terrenos mais ou menos 
// valorizados. Assim, é importante saber o tamanho E o preço por metro quadrado do terreno. 
// Faça um algoritmo em VisuAlg que leia as dimensões do terreno e o valor por metro quadrado 
// dos terrenos daquela região e informe ao cliente o valor a ser pago pelo terreno.


Algoritmo "Exercicio Proposto 01"

// Seção de Declarações das variáveis
Var
    tamanho,valor,valor_terreno:real

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
    escreva("Digite o tamanho(em m²)do terreno:")
    leia(tamanho)
    escreva("Digite o preço por m² do terreno da região:")
    leia(valor)
// Cálculo do valor a ser pago pelo cliente
    valor_terreno<-tamanho*valor
    escreval("O valor a ser pago é R$",valor_terreno)
Fimalgoritmo