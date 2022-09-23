// Questão 3

//Os animais dividem-se em dois grupos: vertebrados e invertebrados. Os animais 
// vertebrados são os que têm esqueleto interno. Existem 5 tipos de vertebrados: os mamíferos, 
// as aves, os répteis, os peixes e os anfíbios. Já os invertebrados são aqueles que não têm 
// esqueleto interno, como as lesmas, moluscos e insetos. 

// Faça um algoritmo para ler um tipo de animal e informar se ele é vertebrado ou invertebrado. 


Algoritmo "Avaliação Ciclo 2 - Questão 3"

// Seção de Declarações das variáveis
Var
    animal:inteiro

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
    escreval("Digite o número correspondente ao tipo de animal:")
    escreval("1 - Mamífero")
    escreval("2 - Ave")
    escreval("3 - Réptil")
    escreval("4 - Peixe")
    escreval("5 - Anfíbio")
    escreval("6 - Lesma")
    escreval("7 - Molusco")
    escreval("8 - Inseto")
    leia(animal)
    Se (animal = 1) ou (animal = 2) ou (animal = 3) ou (animal = 4) ou (animal = 5) entao
        escreval("O animal é vertebrado")
    senao
        se (animal = 6) ou (animal = 7) ou (animal = 8) entao
            escreval("O animal é invertebrado")
        senao
            escreval("Não foi reconhecido o tipo do animal.")
            escreval("Por favor tente novamente.")
        fimse
    fimse
Fimalgoritmo