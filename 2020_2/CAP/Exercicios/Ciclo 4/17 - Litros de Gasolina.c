//Exercicio Proposto 17

/*
Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um programa em C para 
ler o preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu 
colocar no tanque.   
*/


#include <stdio.h>

float gasolina,litros,valor;

int main(){

     printf("Digite o preço da gasolina:");
     scanf("%f",&gasolina);
     printf("Digite o valor do pagamento:");
     scanf("%f",&valor);
     litros=(valor / gasolina);
     printf("Podem ser colocados %4.2f litros de gasolina",litros);

     return 0;
} 