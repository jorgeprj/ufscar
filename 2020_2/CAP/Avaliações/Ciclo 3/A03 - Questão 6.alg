// Questão 4

// Suponha que você tenha o seguinte problema: elaborar um algoritmo para 

Algoritmo "Avaliação Ciclo 3 - Questão 6"

// Seção de Declarações das variáveis 
Var
    convidados1,convidados2,total:real
    c:real

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
// Dados do usuário
    escreva("Digite o número de convidados da festa:")
    leia(convidados1)
//Total de aperto de mãos
    total<-((convidados1)*(convidados1-1))/2
    escreval("O total de apertos de mãos é:",total)
//Combinações possíveis
    c<-1
    convidados2<-convidados1  //Para q "convidados1" não alterasse
    repita //Responsável por alterar os números a serem comparados 
        enquanto convidados2 <> c faca //Responsável por mostrar todas as possibilidades do numero 
            escreval(convidados2," -",c)
            convidados2<-convidados2-1
        fimenquanto
        c<-c+1
        convidados2<-convidados1
    ate c = convidados1
fimalgoritmo