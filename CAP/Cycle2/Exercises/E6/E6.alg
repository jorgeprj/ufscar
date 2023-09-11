Algoritmo "Exercicio Proposto 06"

// Seção de Declarações das variáveis
Var
mes,ano,dia:real
a,b,c,d,x,f,g,h,i,j:real
outro,outro1,outro2,outro3,outro4,outro5:real

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
// Recolhendo dados do usuário
    escreva("Digite o dia:")
    leia(dia)
    escreva("Digite o mês:")
    leia(mes)
    escreva("Digite o ano:")
    leia(ano)
    // Cálculo para descobrir o dia da semana
    a<-Int((12-mes)/10)
    b<-ano-a
    c<-mes+(12*a)
    d<-int(b/100)
    x<-int(d/4)
    f<-2-d+x
    g<-int(365.25*b)
    h<-int(30.6001*(c+1))
    i<-f+g+h+dia+5
    j<-(i Mod 7)
    // Definindo o dia da semana
    Se j=0 Então
    escreva("O dia da semana é Sábado!")
    Senão
    outro<-j
    fimse
    ///
    Se j=1 Então
    escreval("O dia da semana é Domingo!")
    Senão
    outro1<-outro
    fimse
    ///
    Se j=2 Então
    escreval("O dia da semana é Segunda!")
    Senão
    outro2<-outro1
    fimse
    ///
    Se j=3 Então
    escreval("O dia da semana é Terça!")
    Senão
    outro3<-outro2
    fimse
    ///
    Se j=4 Então
    escreval("O dia da semana é Quarta!")
    Senão
    outro4<-outro3
    fimse
    ///
    Se j=5 Então
    escreval("O dia da semana é Quinta!")
    Senão
    outro5<-outro4
    fimse
    ///
    Se j=6 Então
    escreval("O dia da semana é Sexta!")
    Senão
    escreval("Obrigado por usar o sistema.")
    fimse
Fimalgoritmo