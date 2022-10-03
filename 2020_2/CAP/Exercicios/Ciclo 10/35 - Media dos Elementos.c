//Exercicio Proposto 35

/*
Escreva as instruções para calcular a média de todos os valores maiores que zero em um vetor.

O vetor deve se chamar vet e considere-o com tipo base double. A quantidade de elementos 
válidos no vetor é dada pela variável tamanho.

Seu código deve colocar em uma variável chamada media o valor da média. Você tem que declarar 
essa variável e ela deve ter o tipo double.

Caso a média não exista, a variável media deve terminar valendo -1.

double resposta(double vet[], int tamanho){
    // seu código bem aqui
    return media;
}
*/

#include <stdio.h>

double resposta(double vet[], int tamanho){
    double soma = 0;
    int cont = 0;

    for(int i = 0; i < tamanho; i++)
        if(vet[i] > 0){
            soma += vet[i];
            cont++;
        }
        
    double media;
    
    if(cont == 0)
        media = -1;
    else{
        media = soma/cont;
    }

    return media;
}