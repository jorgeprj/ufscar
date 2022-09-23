// Desafio Proposto 3

// Um aluno de computação foi desafiado a produzir uma solução algorítmica para atribuir 
// um conceito para um aluno de uma disciplina a partir da média final que o(a) aluno(a) da 
// disciplina obteve. Os conceitos A, B, C ou D deveriam ser atribuídos da seguinte forma: 

//Tabela Notas - Conceitos

// Condição 	O conceito deverá ser 
    MF ≥ 9              A
    7 ≤ MF < 9	        B
    6 ≤ MF < 7	        C
       MF < 6	           D

// À partir dessas informações, o aluno produziu o seguinte algoritmo:

Algoritmo Média-conceitos

// Objetivo: Ler a média final de um aluno e atribuir os conceitos A, B, C ou D de 
// acordo com a tabela do enunciado do problema

// Hipóteses: valores informados são numéricos e entre 0 e 10.

Inicio
    leia(MF)
    Se  MF  >= 9 Então
          escreva(" Conceito A")
    Fim-Se
    Se  MF  >= 7 Então
          escreva(" Conceito B")
    Fim-Se
    Se  MF >= 6 Então
          escreva(" Conceito C")
    Fim-Se
    Se  MF < 6 Então
          escreva(" Conceito D")
    Fim-Se
Fim-algoritmo

// Quando ele fez os ajustes necessários para transpor esse algoritmo para o VisuAlg 
// (acertou a sintaxe e declarou as variáveis), ele notou que obtinha respostas corretas 
// para médias finais inferiores a 7, mas o algoritmo se atrapalhava quando as médias eram 
// superiores a 7. 

// Questões:  
// A) Explique a razão pela qual ele acabou se deparando com essa situação?
// B) Apresente pelo menos duas versões alternativas para consertar esse algoritmo. 


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