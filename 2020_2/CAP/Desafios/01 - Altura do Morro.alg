// Desafio Proposto 1

// Um aluno de computação resolveu aplicar seus conhecimentos sobre algoritmos para deixar 
// a solução de um problema de vestibular mais genérico.  O problema que ele encontrou foi 
// o seguinte: De um ponto A, um agrimensor enxerga o topo T de um morro, em um ângulo de 45o.  
// Após caminhar exatamente 50 metros em direção ao morro, ele passou a ver o topo T em um 
// ângulo de 60o. Determine a altura do morro.

// Ele pensou sobre a questão e concluiu que poderia fazer um algoritmo mais genérico, em que 
// a quantidade de metros caminhada poderia ser informada pelo usuário. Também poderiam ser 
// informados o ângulo inicial e o ângulo depois da caminhada. Seu desafio é propor um algoritmo 
// genérico da forma como pensado pelo aluno para fazer o cálculo da altura do morro.   


Algoritmo "Desafio Ciclo 1"

// Seção de Declarações das variáveis 
Var
    altura,caminhada,angulo_inicial,angulo_final,tan1,tan2,tan3:real
    x:real
    angulo_rad1,angulo_rad2:real

// Seção de Comandos, procedimento, funções, operadores, etc... 
Inicio
    escreva("Digite o angulo inicial (em graus):")
    leia(angulo_inicial)
    escreva("Digite quantos metros foram caminhados em direção ao morro:")
    leia(caminhada)
    escreva("Digite o ângulo pós a caminhada:")
    leia(angulo_final)
//Definindo as tangentes
    angulo_rad1<-graupRad(angulo_inicial)
    angulo_rad2<-graupRad(angulo_final)
    tan1<-tan(angulo_rad1)
    tan2<-tan(angulo_rad2)
    tan3<-tan2-tan1
//Altura do morro
    x<-caminhada/tan3
    altura<-x+caminhada
    escreval("A altura do morro é aproximadamente:",altura," metros.")
Fimalgoritmo