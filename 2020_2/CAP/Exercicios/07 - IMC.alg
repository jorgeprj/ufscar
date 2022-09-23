// Exercicio Proposto 07

// O IMC – Indice de Massa Corporal é um critério da Organização Mundial de Saúde para 
// dar uma indicação sobre a condição de peso de uma pessoa adulta. A fórmula é: 

// IMC = peso/altura^2

// Elabore um algoritmo para calcular o IMC de uma pessoa e imprimir sua condição de acordo 
com a tabela a seguir:

// IMC em adultos      Condição

// Abaixo de 18,5	    Abaixo do peso
// Entre 18,5 e 25	    Peso normal
// Entre 25 e 30	    Acima do peso
// Acima de 30	        Obeso

// Resolva as condições confusas da questão fazendo uma busca na internet. Além disso, você 
// sabe quais seriam as informações de entrada do seu algoritmo?


Algoritmo "Exercicio Proposto 07"

// Seção de Declarações das variáveis
Var
    peso,altura,imc:real

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
    // Recolhendo dados do usuário
    escreva("Digite o seu peso(em kg):")
    leia(peso)
    escreva("Digite sua altura(em metros):")
    leia(altura)
    // Cálculo para descobrir o IMC
    imc<-peso/(altura^2)
    // Classificando o IMC
    se (imc<18.5) ENTAO
    escreval ("ABAIXO DO PESO.")
    fimse
    ///
    se (imc>18.5)e(25>imc) ENTAO
    escreval ("PESO NORMAL.")
    fimse
    ///
    se (30>imc)e(imc>25) ENTAO
    escreval ("PESO ACIMA DO PESO.")
    fimse
    ///
    se (imc>30) ENTAO
    escreval ("OBESO.")
    fimse
    ///
Fimalgoritmo