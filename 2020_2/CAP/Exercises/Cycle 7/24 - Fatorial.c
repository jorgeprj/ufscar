//Exercicio Proposto 24

/*
Faça um programa em C que use uma função para calcular o fatorial de um número N. 
*/


#include <stdio.h>
#include <stdlib.h>
int i,n,fatorial;

//Fatorial
int fat(int n1){
    fatorial=1;
    for(i=2;i<=n1;i++)
        fatorial=fatorial*i;

    return(fatorial);
}

//Principal
int main(void){
    printf("Digite o valor a ser fatorado:");
    scanf("%d", &n);
    printf("%d",fat(n));
    return 0;
}
