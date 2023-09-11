//Exercicio Proposto 34

/*
Escreva um programa em C completo para ler um vetor de 10 elementos, todos com tipo 
base unsigned int.

O programa também deve apresentar os dados do vetor em uma única linha, na ordem de entrada. 
Os elementos devem separados por um espaço e a linha finalizada com '\n'.
*/

/*
  Leitura de dados em vetor e apresentacao
  Input: uma sequencia de 10 valores inteiros
  Output: a mesma sequencia de 10 valores
*/

#include <stdio.h>

int main(void){
    int i;
    int c;
    unsigned int vet[10];

    for (i=0;i<=9;i++){
        scanf("%d",&vet[i]);
    }

    for (c=0;c<=9;c++){
        printf("%d ",vet[c]);
    }
    
    printf("\n");
    return(0);
}