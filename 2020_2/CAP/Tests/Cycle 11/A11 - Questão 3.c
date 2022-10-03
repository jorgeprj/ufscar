//Questão 3

/*
Escreva uma função que retorne a média de todos os valores de uma matriz declarada da 
seguinte forma:
    int matriz[TAMANHO][TAMANHO];

O valor de TAMANHO já está predefinido por um #define.

A função deve:
        Ter nome media;
        Ter como seu primeiro parâmetro a matriz;
        Ter outros nos outros dois parâmetros o número de linhas e o número de colunas que serão considerados;
        Retornar a média como um valor double no nome da função.
*/

#include <stdio.h>
#define TAMANHO 50

double media(int mat[][TAMANHO], int linhas, int colunas){
    double soma = 0;

    for(int i = 0; i < linhas; i++)
        for(int j = 0; j < colunas; j++){
            soma += (double)mat[i][j];
    }
    
    return soma/(linhas * colunas);
}