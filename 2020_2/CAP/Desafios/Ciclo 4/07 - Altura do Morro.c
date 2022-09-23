//Desafio Proposto 7

/*
Um aluno de computação resolveu aplicar seus conhecimentos sobre algoritmos para deixar 
a solução de um problema de vestibular mais genérico.  O problema que ele encontrou foi o 
seguinte: De um ponto A, um agrimensor enxerga o topo T de um morro, em um ângulo de 45o.  
Após caminhar exatamente 50 metros em direção ao morro, ele passou a ver o topo T em um ângulo 
de 60o. Determine a altura do morro.

Ele pensou sobre a questão e concluiu que poderia fazer um algoritmo mais genérico, em que a 
quantidade de metros caminhada poderia ser informada pelo usuário. Também poderiam ser 
informados o ângulo inicial e o ângulo depois da caminhada. Seu desafio é converter o algoritmo 
que o aluno fez em um programa C.      
*/


#include <stdio.h>
#include <math.h>

float altura,caminhada,angulo_inicial,angulo_final,tan1,tan2,tan3;
float x;
int main()

{

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
}  