Algoritmo "Exercicio Proposto 02"

// Seção de Declarações das variáveis 
Var
    cavalos,estoque,compra,ferraduras:real

// Seção de Comandos, procedimento, funções, operadores, etc... 
Inicio 
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