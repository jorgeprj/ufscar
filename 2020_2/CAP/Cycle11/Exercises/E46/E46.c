

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