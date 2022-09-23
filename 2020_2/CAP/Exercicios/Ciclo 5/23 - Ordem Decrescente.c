//Exercicio Proposto 23

/*
Escreva um programa em C que leia três valores inteiros e diferentes e mostre-os em ordem 
decrescente.     
*/


#include <stdio.h>

float x,y,z;

int main(){
    //Dados do usuário
    printf("Digite o primeiro número:");
    scanf("%f",&x); 
    printf("Digite o segundo número:");
    scanf("%f",&y);
    printf("Digite o terceiro número:");
    scanf("%f",&z);
    
    //Definindo a ordem
    //Caso 1
    if(x>y)
        if(x>z)
            if(y>z)
                printf("A ordem é %.2f,%.2f,%.2f",x,y,z);
            else
                printf("A ordem é %.2f,%.2f,%.2f",x,z,y);
      
    //Caso 2
    if(x<y)
        if(y>z)
            if(x>z)
                printf("A ordem é %.2f,%.2f,%.2f",y,x,z);
            else
                printf("A ordem é %.2f,%.2f,%.2f",y,z,x);
      
    //Caso 3
    if(x<y)
        if(y<z)
            printf("A ordem é %.2f,%.2f,%.2f",z,y,x);
    
    //Caso 4
    if(x>y)
        if(x<z)
            printf("A ordem é %.2f,%.2f,%.2f",z,x,y);

   return 0;
} 