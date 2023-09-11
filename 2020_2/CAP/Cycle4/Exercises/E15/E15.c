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