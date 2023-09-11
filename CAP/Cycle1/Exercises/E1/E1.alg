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