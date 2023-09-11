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