//Desafio Proposto 13

/*
Faça um procedimento em C que calcule as raízes reais de uma equação de segundo grau, 
tendo como parâmetros a, b e c.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a, b, c, x1, x2, delta;

//Procedimento
float praizes(){
    printf("Digite o valor do termo a: ");
    scanf("%f", &a);
    printf("Digite o valor do termo b: ");
    scanf("%f", &b);
    printf("Digite o valor do termo c: ");
    scanf("%f", &c);

    //Calculando o x1 e x2
    delta = b*b - 4*a*c;
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    if(delta < 0) 
        printf("A equacao nao possui raizes reais.n");
    else{
        printf("O valor de x1: %.2f\n", x1);
        printf("O valor de x2: %.2f\n", x2);
    }
}
 
int main(){
    praizes();
    
    return(0);
}