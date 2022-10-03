//Exercicio Proposto 34

/*
Escreva um programa em C completo para ler um vetor de 10 elementos, todos com tipo 
base unsigned int.

O programa também deve apresentar os dados do vetor em uma única linha, na ordem inversa a 
da entrada.
Para isso, o vetor deve ser precorrido do final para o começo, decrescendo o valor do índice.

Os elementos devem separados por um espaço e a linha finalizada com '\n'
*/

/*
  Leitura de dados em vetor e apresentacao
  Input: uma sequencia de 10 valores inteiros
  Output: uma sequencia de 10 valores que é a permutacao da de entrada em ordem inversa
*/

#include <stdio.h>

int main(void){
    int i;
    unsigned int vet[10];

    for (i=0;i<=9;i++){
        scanf("%d",&vet[i]);
    }

    for (i=9;i>=0;i--){
        printf("%d ",vet[i]);
    }

    printf("\n");
    return(0);
}