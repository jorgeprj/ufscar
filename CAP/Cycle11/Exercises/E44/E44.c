#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void){
    int mat[10][10];
    int linhas;
    int colunas;
    bool identidade = (linhas == colunas);
    int i = 0;
    
    while(i < linhas && identidade){
        int j = 0;
        while(j < colunas && identidade){
        if((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0))
            identidade = false;
        j++;
    }
    i++;
}
    
    return 0;
}