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