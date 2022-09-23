//Exercicio Proposto 16

/*
Faça um programa em C para calcular quantas ferraduras é preciso comprar para trocar todas 
as ferraduras dos cavalos de um haras.  
*/


#include <stdio.h>

int cavalos,estoque,ferraduras,compra;

int main(){

     printf("Digite a quantidade de cavalos:");
     scanf("%d",&cavalos);
     printf("Digite a quantidade de ferraduras no estoque:");
     scanf("%d",&estoque);
     ferraduras=(4 * cavalos);
     compra=(ferraduras - estoque);
     printf("É necessario comprar %d ferraduras",compra);

     return 0;
}  