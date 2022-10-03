//Exercicio Proposto 26

/*
Escreva uma função em C que calcule e retorne a distância euclidiana entre dois pontos (x1, y1) 
e (x2, y2). Todos os números e valores de retorno devem ser do tipo float.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float x,y,xx,yy,euclid;

//Distancia Euclidiana
float euclidiana(float x,float y,float xx,float yy){
    euclid=sqrt((pow((xx-x),2))+(pow((yy-y),2)));
    
    return euclid;
}

//Principal
int main(void){
    float x1,x2,y1,y2;

    printf("Digite a primeira coordenada:");
    printf("\nx-");
    scanf("%f",&x1);
    printf("y-");
    scanf("%f",&y1);
    printf("Digite a segunda coordenada:");
    printf("\nx-");
    scanf("%f",&x2);
    printf("y-");
    scanf("%f",&y2);
 
    euclidiana(x1,y1,x2,y2);
    printf("A distância euclidiana é: %.2f",euclid);
 
    return 0;
}