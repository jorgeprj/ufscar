Algoritmo "Desafio Proposto 4"

// Seção de Declarações das variáveis
Var
    m1,m2,m3:real
    possibilidade:logico

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
    //Dados do usuário
    escreva("Digite a primeira medida:")
    leia(m1)
    escreva("Digite a segunda medida:")
    leia(m2)
    escreva("Digite a terceira medida:")
    leia(m3)
    //Verificando se é possivel formar um triangulo
    se (m1 < (m2 + m3)) e (m2 < (m1 + m3)) e (m3 < (m1 + m2)) então
    possibilidade <- VERDADEIRO
    senao
    possibilidade <- FALSO
    fimse
    //Definindo o tipo de triângulo
    se (possibilidade = VERDADEIRO) então
    se (m1 = m2) e (m1 = m3) e (m2 = m3) então
    escreva ("Triângulo equilátero")
    fimse
    se ((m1 = m2) e (m1 <> m3)) xou ((m1 = m3) e (m1 <> m2)) xou ((m2 = m3) e (m2 <> m1)) então
    escreva ("Triângulo isóceles")
    fimse
    se (m1 <> m2) e (m1 <> m3) e (m2 <> m3) então
    escreva ("Triângulo escaleno")
    fimse
    senao
    escreva ("Com essas medidas é impossível montar um triângulo")
    fimse
fimalgoritmo