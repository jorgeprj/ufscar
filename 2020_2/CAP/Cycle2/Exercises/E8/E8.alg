Algoritmo "Exercicio Proposto 08"

// Seção de Declarações das variáveis
Var
    sexo:caractere
    homem,mulher,altura:real

// Seção de Comandos, procedimento, funções, operadores, etc...
Inicio
    escreval("Digite sual altura(em metros):")
    leia (altura)
    homem<-(72.7*altura)-58
    mulher<-(62.1*altura)-44.7
    escreval("Digite seu sexo(H para homem e F para mulher):")
    leia (sexo)
    escolha sexo
    caso "H"
    escreval ("Seu peso ideal é:",homem)
    caso "F"
    escreval ("Seu peso ideal:",mulher)
    outrocaso
    escreval ("Erro no sitema.Por favor tente denovo.")
    escreval ("Coloque o sexo em Maiúscula."
    fimescolha
fimalgoritmo