// Exercicio Proposto 13

// Construa um algoritmo que, dado o primeiro elemento e a razão de uma progressão 
// aritmética (PA), imprima todos os n primeiros elementos da PA, onde n também é informado 
// pelo usuário. Lembre-se que uma PA pode ser crescente ou decrescente.


Algoritmo "Exercicio Proposto 13"

// Seção de Declarações das variáveis
Var
    termo, razao, i, elementos:Inteiro

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
//Definindo os números múltiplos
    escreva("Digite o 1º termo da P.A.: ")
    leia(termo)
    escreva("Digite a razão da P.A.: ")
    leia(razao)
    escreva("Digite a quantidade de elementos:")
    leia(elementos)
    para i de 1 ate elementos faca
        escreval(i, " - ", termo)
        termo <- termo + razao
    fimpara
fimalgoritmo