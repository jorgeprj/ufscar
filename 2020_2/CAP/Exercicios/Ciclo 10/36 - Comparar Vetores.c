//Exercicio Proposto 36

/*
Escreva as instruções para verificar se dois vetores são idênticos em conteúdo.

O primeiro vetor tem nome vet1 e comprimento tamanho1; o segundo se chama vet2 e 
tem comprimento tamanho2.

O tipo base dos vetores é double.
Terminada a verificação, uma variável iguais deve ter valor 1 (verdadeiro) ou 0 (falso) 
conforme os vetores sejam iguais ou diferentes.

Esta variável deve ser declarada no seu código.

void resposta(double vet1[], int tamanho1, double vet2[], int tamanho2){

    // seu código deve vir aqui

    if(iguais)
        printf("iguais\n");
    else
        printf("diferentes\n");

 }
*/

#include <stdio.h>

void resposta(double vet1[], int tamanho1, double vet2[], int tamanho2){

    int i = 0;

    int iguais = (tamanho1 == tamanho2);
    while(i < tamanho1 && iguais){
        iguais = (vet1[i] == vet2[i]);
        i++;
    }

    if(iguais)
        printf("iguais\n");
    else
        printf("diferentes\n");

 }