//Exercicio Proposto 15

/*
Uma imobiliária apresenta os preços dos terrenos que vende por área em metros quadrados. 
Por exemplo, um terreno de 10 x 10 tem 100 metros quadrados e está situado em um baixo cujo 
preço por metro quadrado é de R$ 202,00. Então, para esse caso, o cliente deverá pagar 
R$ 20.200,00 pelo terreno.  Mas, é claro, que cada região pode ter terrenos mais ou menos
valorizados. Assim, é importante saber o tamanho E o preço por metro quadrado do terreno. 

Faça um programa em C que leia as dimensões do terreno e o valor por metro quadrado dos 
terrenos daquela região e informe ao cliente o valor a ser pago pelo terreno.      
*/


#include <stdio.h>

float tamanho,valor,valor_terreno;

int main(){

     printf("Digite o tamanho(em m²)do terreno:");
     scanf("%f",&tamanho);
     printf("Digite o preço por m² do terreno da região:");
     scanf("%f",&valor);
     valor_terreno=(tamanho * valor);
     printf("O preço a ser pago é %9.2f reais",valor_terreno);

     return 0;
}  