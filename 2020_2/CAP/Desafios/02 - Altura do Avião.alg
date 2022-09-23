// Desafio Proposto 2

// Uma aluna de computação resolveu aplicar seus conhecimentos sobre algoritmos 
// para deixar a solução de um problema de vestibular mais genérico.  O problema que 
// ela encontrou foi o seguinte: Um avião decola de um aeroporto na Holanda, percorrendo 
// uma trajetória retilínea, formando com o solo um ângulo de 30o. Para quem não conhece 
// a Holanda, o território é incrivelmente plano. Depois de percorrer 1.000 metros, 
// qual a altura atingida pelo avião?

// Ela pensou sobre a questão e concluiu que poderia fazer um algoritmo mais genérico, em que 
// a quantidade de metros sobrevoada poderia ser informada pelo usuário. Também poderia ser 
// informado o ângulo de decolagem. Seu desafio é propor um algoritmo genérico da forma como
// pensado pela aluna para fazer o cálculo da altura atingida pelo avião.   


Algoritmo "Desafio Ciclo 2"

// Seção de Declarações das variáveis 
Var
    metros,decolagem,altura:real
    x,y:real

// Seção de Comandos, procedimento, funções, operadores, etc...  
Inicio
    escreva("Digite a quantidade de metros sobrevoada:")
    leia(metros)
    escreva("Digite o angulo de decolagem (em graus):")
    leia(decolagem)
//Cálculo da altura sobrevoada
    x<-graupRad(decolagem)
    y<-sen(x)
    altura<-y*metros
    escreva("O avião atingiu:",altura," metros")
Fimalgoritmo