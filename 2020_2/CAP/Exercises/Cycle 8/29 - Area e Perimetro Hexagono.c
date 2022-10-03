//Exercicio Proposto 29

/*
Faça um procedimento em C que calcule a área e o perímetro de um hexágono.

A leitura das informações deve ser feita no programa principal e os valores da área e do 
perímetro devem ser impressos pelo programa principal. Você pode utilizar as funções sqrt e 
pow para fazer os cálculos matemáticos necessários.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float l,A;

//area
float area(float l){
    A=(3*(pow(l,2))*(sqrt(3)))/2;
    return(A);
}

float l,p;

//perimetro
float perimetro(float l){
    p=6*l;
    return(p);
}

float lado,per,ar;
int main(){
    printf("Digite o lado do hexágono:");
    scanf("%f",&lado);

    per=perimetro(lado);
    ar=area(lado);

    printf("O perimetro é: %.2f \nA área é: %.2f",per,ar);
    return 0;
}
