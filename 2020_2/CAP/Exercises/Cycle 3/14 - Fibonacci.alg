// Exercicio Proposto 14

// A sequência de Fibonacci tem papel importante na explicação de fenômenos naturais. Ela é 
// também bastante utilizada para fins estéticos, pela sua reconhecida harmonia. Exemplo disso 
// foi sua utilização na construção do Partenon, em Atenas. A sequência dá-se inicialmente por 
// dois números 1. A partir do terceiro elemento usa-se a expressão: elementon = elementon-1 + 
// elementon-2. Exemplo de sequência: 1, 1, 2, 3, 5, 8. Construa um algoritmo que imprima na 
// tela os n primeiros elementos da sequência de Fibonacci, onde n é informado pelo usuário. 


Algoritmo "Exercicio Proposto 14"

// Seção de Declarações das variáveis
Var
    anterior,atual,proximo,c,limite:Inteiro

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
//Definindo o limite
    escreva("Digite o limite da Sequência de Fibonacci:")
    leia(limite)
//Definindo a sequencia de fibonacci
    anterior<-0
    atual<-1
    proximo<-1
    para c de 1 ate limite faca
        escreval(proximo)
        proximo<-atual+anterior
        anterior<-atual
        atual<-proximo
    fimpara
fimalgoritmo