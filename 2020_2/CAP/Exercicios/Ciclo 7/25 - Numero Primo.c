//Exercicio Proposto 25

/*
Faça um programa em C que utilize uma função para informar se um número é primo ou não.
*/


#include <stdio.h>
#include <stdlib.h>

int i,n,primo,resultado;

//Verificando se é primo
int prim(int n1){
    for (i=2;i<=n1/2;i++)
        if (n1%i==0)
            primo++;

    return(primo);
}

//Principal
int main(void){
    printf("Digite um valor:");
    scanf("%d", &n);
    prim(n);

    if (primo==0)
        printf("%d é um número primo\n",n);
    else
        printf("%d não é um número primo\n",n);
    return 0;
}