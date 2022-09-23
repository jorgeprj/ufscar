//Exercicio Proposto 18

/*
Faça um programa em C para ler três notas de um aluno em uma disciplina e imprimir a 
sua média aritmética. 
*/


#include <stdio.h>

float n1,n2,n3,media;
int main()

{

     printf("Digite a primeira nota:");
     scanf("%f",&n1);
     printf("Digite a segunda nota:");
     scanf("%f",&n2);
     printf("Digite a terceira nota:");
     scanf("%f",&n3);
     media=((n1 + n2 + n3)/3);
     printf("A média aritimética é %2.2f",media);
