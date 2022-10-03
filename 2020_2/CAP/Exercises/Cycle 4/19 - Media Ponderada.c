//Exercicio Proposto 19

/*
Faça um programa em C para ler três notas de um aluno e imprimir sua média ponderada (as 
notas tem pesos respectivos de 1, 2 e 3). Pesquisar como calcular a média ponderada.
*/


#include <stdio.h>

float n1,n2,n3,media;

int main(){

     printf("Digite a primeira nota:");
     scanf("%f",&n1);
     printf("Digite a segunda nota:");
     scanf("%f",&n2);
     printf("Digite a terceira nota:");
     scanf("%f",&n3);
     media=(((n1*1) + (n2*2) + (n3*3))/6);
     printf("A média ponderada é %2.2f",media);

     return 0;
}  