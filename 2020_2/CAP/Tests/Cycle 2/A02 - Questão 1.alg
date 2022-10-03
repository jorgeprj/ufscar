// Questão 1

// Elabore um algoritmo para calcular o que deve ser pago por um produto, considerando 
// o preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos 
// a seguir para saber qual a forma de pagamento escolhida pelo(a) consumidor(a). O algoritmo 
// deve ler o preço de etiqueta e a forma de pagamento e informar o valor a ser pago pelo(a) 
// consumidor(a).

//  Código              Forma de Pagamento                      Condição oferecida 
//    1                 À vista em dinheiro ou cheque           15% de desconto 
//    2                 À vista no cartão de dédito             12% de desconto 
//    3                 À vista no cartão de crédito            5% de desconto
//    4                 Em 2x                                   preço normal de etiqueta 
//    5                 Em 3x                                   preço da etiqueta + juros de 10%
//    6                 Em 4x                                   preço da etiqueta + juros de 15%


Algoritmo "Avaliação Ciclo 2 - Questão 1"

// Seção de Declarações das variáveis
Var
    etiqueta,pagamento,valor:real

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
    escreva("Por favor digite o preço de etiqueta:")
    leia(etiqueta)
    escreval("Digite o número correspondente a forma de pagamento:")
    escreval("1 - À vista em dinheiro ou cheque")
    escreval("2 - À vista no cartão de dédito")
    escreval("3 - À vista no cartão de crédito")
    escreval("4 - Parcelado em 2x")
    escreval("5 - Parcelado em 3x")
    escreval("6 - Parcelado em 4x")
    leia(pagamento)
    escolha pagamento
    caso 1
        valor<-etiqueta*0.85
    caso 2
        valor<-etiqueta*0.88
    caso 3
        valor<-etiqueta*0.95
    caso 4
        valor<-etiqueta
    caso 5
        valor<-etiqueta*1.1
    caso 6
        valor<-etiqueta*1.15
    fimescolha
    escreval("O valor total a ser pago é de",valor," reais")
Fimalgoritmo