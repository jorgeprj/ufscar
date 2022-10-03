// Desafio Proposto 6

// Provavelmente você já se perguntou como o computador calcula funções como seno e cosseno. 
// Computadores antigos usavam tabelas armazenadas na memória, isto é, para um determinado 
// ângulo existia um valor pré-determinado para uma função trigonométrica associada ao mesmo. 
// Nos dias de hoje os computadores usam outra técnica. Matematicamente pode ser mostrado que 
// sen(x) , por exemplo, é a soma de uma série infinita (chamada de série de Taylor) como 
// especificada a seguir:

// sen(x) = x − x^3/3! + x^5/5! − x^7/7!+...

// O símbolo ! significa fatorial de um número. Sabemos que o fatorial de 0 é 0! = 1 e que 
// o fatorial de 1 é 1! = 1. Também sabemos que não podemos fazer uma soma infinita, pois 
// isso levaria um tempo infinito e não temos tudo isso de tempo para fazer um simples cálculo 
// de seno.  Sua missão é fazer um algoritmo que vá escrevendo os resultados parciais à medida 
// que mais parcelas da equação vão sendo computadas. Ou seja, primeiramente, deve-se escrever 
// o valor de x. Lembrando que x deve ser em radianos! Portanto, antes de calcular o valor, 
// certifique-se que ele está no intervalo de (0,2π). Se ele não estiver no intervalor, faça os 
// ajustes para que fique.  Voltando, depois que x for escrito, a próxima informação deverá 
// ser x − x^3/3! e depois x − x^3/3! + x^5/5!.  
// Você poderá fazer isso para 5 parcelas, mas para tanto, deverá usar a estrutura de repetição.  
// Depois de todas as parcelas escritas, escreva, também, o resultado da função matemática do 
// VisuAlg para calcular o seno.  E aí, os valores foram próximos?

// Dicas: 
// 1. Quando se multiplica um número negativo por -1 ela se torna positivo; se o número é 
// positivo, quando multiplicado por -1 ele se torna negativo.
// 2. O fatorial de um número x (x!) = x . (x-1)! ou x . (x-1) x (x-2)! 


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