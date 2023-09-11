#include <stdio.h>
#include <math.h>

float altura,caminhada,angulo_inicial,angulo_final,tan1,tan2,tan3;
float x;

int main(){

     printf("Digite o angulo incial(em graus):");
     scanf("%f",&angulo_inicial);
     printf("Digite a quantos metros foram caminhados em direção ao morro:");
     scanf("%f",&caminhada);
     printf("Digite o ângulo pós a caminhada:");
     scanf("%f",&angulo_final);
     tan1=tan(angulo_inicial);
     tan2=tan(angulo_final);
     tan3=(tan2 - tan1);
     x=(caminhada / tan3);
     altura=(x + caminhada);
     printf("A altura do morro é aproximadamente %5.2f metros",altura);

     return 0;
}  