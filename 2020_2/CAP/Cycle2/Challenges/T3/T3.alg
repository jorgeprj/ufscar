Algoritmo "Desafio Proposto 3"

// Seção de Declarações das variáveis 
Var
    MF:real
    MFF,MFFF:real

// Seção de Comandos, procedimento, funções, operadores, etc... 
Inicio
    //Opção 1
    escreval("Digite a média final do aluno:")
    leia(MF)
        Se (MF>=9)Entao
            escreval("Conceito A")
        Fimse
        Se (MF<9)e(MF>=7)Entao
            escreval("Conceito B")
        Fimse
        Se(MF<7)e(MF>=6)Entao
            escreval("Conceito C")
        Fimse
        Se (MF<6)Entao
            escreval("Conceito D")
        Fimse
        
    //Opção 2
    escreval("Digite a média final do aluno:")
    leia(MFF)
    MFFF<-int(MFF)
    escolha MFFF
        caso 10,9
        escreva("Conceito A")
        caso 8,7
        escreva("Conceito B")
        caso 6
        escreva("Conceito C")
        outrocaso
        escreva("Conceito D")
    fimescolha
Fimalgoritmo