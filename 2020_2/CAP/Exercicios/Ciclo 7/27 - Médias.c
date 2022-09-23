//Exercicio Proposto 27

/*
Escreva uma função em C  que receba 3 notas de um aluno (float) e uma letra. Se a letra for A 
a função retorna a média aritmética das notas do aluno, se for P, a sua média ponderada 
(pesos: 5, 3 e 2) e se for H, a sua média harmônica.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float n1,n2,n3,med;

//Media Aritimética 
float arit(float n1,float n2,float n3){
    med=((n1+n2+n3)/3);
    
    return med;
}

//Média Ponderada
float pond(float n1,float n2,float n3){
    med=((n1*5+n2*3+n3*2)/10);
    
    return med;
}

//Media Harmônica
float harm(float n1,float n2,float n3){
    med=(3/((1/n1)+(1/n2)+(1/n3)));
    
    return(med);
 }

//Principal
int main(void) {
    float nota1,nota2,nota3,media;
    char letra;

    printf("Digite a forma que você quer calcular a média");
    printf("\nA - Média Aritimética\nP - Média Ponderada\nH - Média Harmônica\n");
    scanf("%c",&letra);
    printf("Digite a primeira nota:");
    scanf("%f",&nota1);
    printf("Digite a segunda nota:");
    scanf("%f",&nota2);
    printf("Digite a terceira nota:");
    scanf("%f",&nota3);

    //Media Aritimetica
    if (letra=='a'||letra=='A'){
        media=arit(nota1,nota2,nota3);
        printf("A média aritimética é: %.2f",media);
    }
    
    //Media Ponderada 
    if (letra=='p'||letra=='p'){
        media=pond(nota1,nota2,nota3);
        printf("A média ponderada é: %.2f",media);
    }

    //Media Harmônica
    if (letra=='h'||letra=='H'){
        media=harm(nota1,nota2,nota3);
        printf("A média harmônica é: %.2f",media);
    }

 return 0;
}