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