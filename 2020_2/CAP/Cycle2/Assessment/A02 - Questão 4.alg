// Questão 4

// As figuras geométricas planas podem ser classificadas de acordo com o número de lados:

// Triângulo        -        3 lados
// Quadrilátero     –        4 lados
// Pentágono        –        5 lados
// Hexágono         –        6 lados
// Heptágono        –        7 lados
// Octágono         –        8 lados
// Eneágono         –        9 lados
// Decágono         –       10 lados
// Undecágono       –       11 lados
// Dodecágono       –       12 lados
// Pentadecágono    –       15 lados
// Icoságono        –       20 lados

//Faça um algoritmo que, dado um número de lados maior que 0, informe qual figura 
//geométrica pode ser formada. Se não puder formar uma figura geométrica ou não houver 
// classificação para ela, o algoritmo deve apresentar uma mensagem de esclarecimento. 
// Se o usuário informar o valor zero ou um número negativo, uma mensagem específica deve 
// ser apresentada.  


Algoritmo "Avaliação Ciclo 2 - Questão 4"

// Seção de Declarações das variáveis
Varlado:inteiro

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
    escreva("Digite o número de lados:")
    leia(lado)
//Mensagem para 0,1,2 e negativos
    Se (lado <= 2) e (lado > 0) entao
        escreval("Impossível a formação de uma figura geométrica com esse número de lados.")
        escreval("Por favor tente novamente.")
    Senao
        Se (lado < 0) entao
            escreval("Números negativos não são números válidos para a formação de uma figura geométrica.")
            escreval("Por favor tente novamente.")
        Senao
            Se (lado = 0) entao
                escreval("O número zero é inválido.")
                escreval("Por favor tente novamente.")
            fimse
        fimse
    fimse

//Definindo o nome das figuras
    escolha lado
        caso 3
        escreval("Triângulo")
        caso 4
        escreval("Quadrado")
        caso 5
        escreval("Pentágono")
        caso 6
        escreval("Hexágono")
        caso 7
        escreval("Heptágono")
        caso 8
        escreval("Octágono")
        caso 9
        escreval("Eneágono")
        caso 10
        escreval("Decágono")
        caso 11
        escreval("Undecágono")
        caso 12
        escreval("Dodecágono")
        caso 15
        escreval("Pentadecágono")
        caso 20
        escreval("Icoságono")
        outrocaso
            escreval("Desculpa, mas o valor informado não está no nosso banco de dados.")
    fimescolha
Fimalgoritmo