Algoritmo "Desafio Proposto 6"

// Seção de Declarações das variáveis
Var
    num,rad,fat:real
    c,n,x:real
    fun1,fun2,fun3,fun4,fun5,fun0:real
    seno1,seno2:real

// Seção de Comandos, procedimento, funções, operadores, etc... 
Inicio
    escreva("Digite um valor:")
    leia(num)
    se (num>360) e (num<0)entao
        escreva("Valor inválido.Por favor tente novamente.")
    senao
        rad<-GraupRad(num)
    fimse
    escreval("O valor em radianos é de:",rad)
//Fatorial
    n<-3
    fat<-1
    enquanto n >= 1 faca
        fat<-n*fat
        n<-n-1
    fimenquanto
//Fun 1
    x<-rad
    fun1<-x-((x^3)/fat)
    escreval("O valor após a primeira operação é de:",fun1)
//Fun 2
    n<-5
    fat<-1
    enquanto n >= 1 faca
        fat<-n*fat
        n<-n-1
    fimenquanto
    fun2<-((x^5)/fat)
    fun0<-fun1+fun2
    escreval("O valor após a segunda operação é de:",fun0)
//Fun 3
    n<-7
    fat<-1
    enquanto n >= 1 faca
        fat<-n*fat
        n<-n-1
    fimenquanto
    fun3<-((x^7)/fat)
    fun0<-fun1+fun2-fun3
    escreval("O valor após a terceira operação é de:",fun0)
//Fun 4
    n<-9
    fat<-1
    enquanto n >= 1 faca
        fat<-n*fat
        n<-n-1
    fimenquanto
    fun4<-((x^9)/fat)
    fun0<-fun1+fun2-fun3+fun4
    escreval("O valor após a quarta operação é de:",fun0)
//Fun 5
    n<-11
    fat<-1
    enquanto n >= 1 faca
        fat<-n*fat
        n<-n-1
    fimenquanto
    fun5<-(x^11)/fat)
    fun0<-fun1+fun2-fun3+fun4-fun5
    escreval("O valor após a quinta operação é de:",fun0)
//Comparação
    seno1<-sen(rad)
    seno2<-fun0
    escreval("-----------------------------------------------------------------")
    escreval("O resultado do algoritmo é:")
    escreval("|Resultado obtido pela máquina:",seno1,"|")
    escreval("|Resultado obtido pelo algoritmo após 5 operações:",seno2,"|")
Fimalgoritmo