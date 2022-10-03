//Exercicio Proposto 43

/*
Uma matriz é uma matriz identidade quando:
    É quadrada;
    Tem todos os elementos da diagonal principal iguais a 1;
    Tem todos os elementos fora da diagonal principal iguais a 0;

Escreva uma função em C que retorne 1 (ou true) se uma dada matriz for uma matriz 
identidade ou 0 (ou false) caso contrário.

A função será chamada com o seguinte comando:

    if(identidade(mat, linhas, colunas))
        printf("identidade");
    else
        printf("nao identidade");

Ao escrever sua função, assuma que a matriz foi declarada desta forma:
    double mat[LINHAS][COLUNAS];
    
Em cada exemplo de entrada, primeiro vêm as dimensões (numero_linhas e numero_colunas) e em seguida os valores da matriz.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define COLUNAS 700

bool identidade(double mat[][COLUNAS], int numero_linhas, int numero_colunas){
    bool id = (numero_linhas == numero_colunas);
    int i = 0;
    while(i < numero_linhas && id){
        int j = 0;
        while(j < numero_colunas && id){
            if((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0))
                id = false;
            j++;
        }
        i++;
    }
    
    return id;
}