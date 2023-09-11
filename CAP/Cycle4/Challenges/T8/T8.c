#include <stdio.h>
#include <math.h>

float metros,decolagem,altura;
float x;

int main(){

     printf("Digite a quantidade de metros sobrevoada:");
     scanf("%f",&metros);
     printf("Digite o angulo de decolagem(em graus):");
     scanf("%f",&decolagem);
     x=sin(decolagem);
     altura=(x * metros);
     printf("O avião atingiu %5.2f metros",altura);

     return 0;
}  