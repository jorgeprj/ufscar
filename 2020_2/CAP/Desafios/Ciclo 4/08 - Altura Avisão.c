//Desafio Proposto 8

/*
Uma aluna de computação resolveu aplicar seus conhecimentos sobre algoritmos para deixar a 
solução de um problema de vestibular mais genérico.  O problema que ela encontrou foi o 
seguinte: Um avião decola de um aeroporto na Holanda, percorrendo uma trajetória retilínea, 
formando com o solo um ângulo de 30o. Para quem não conhece a Holanda, o território é 
incrivelmente plano. Depois de percorrer 1.000 metros, qual a altura atingida pelo avião?

Ela pensou sobre a questão e concluiu que poderia fazer um algoritmo mais genérico, em que a 
quantidade de metros sobrevoada poderia ser informada pelo usuário. Também poderia ser 
informado o ângulo de decolagem. Seu desafio é transformar o algoritmo em um programa C.  
*/


#include <stdio.h>
#include <math.h>

float metros,decolagem,altura;
float x;
int main()

{

     printf("Digite a quantidade de metros sobrevoada:");
     scanf("%f",&metros);
     printf("Digite o angulo de decolagem(em graus):");
     scanf("%f",&decolagem);
     x=sin(decolagem);
     altura=(x * metros);
     printf("O avião atingiu %5.2f metros",altura);
}  