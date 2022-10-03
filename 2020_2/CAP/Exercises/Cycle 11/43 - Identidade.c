//Exercicio Proposto 43

/*
Escreva o código necessário para determinar se uma matriz qualquer é a matriz identidade.

Uma matriz identidade deve:
    Ser quadrada;
    Ter todos os elementos da diagonal principal iguais a 1;
    Ter todos os elementos fora da diagonal principal iguais a 0;

Considere:
    A matriz se chama mat e já foi declarada e preenchida com valores (tipo base: double);
    As dimensões da matriz estão definidas em duas variáveis já existentes: numero_linhas e 
    numero_colunas (ambas int);
    Uma variável chamada identidade, que deve ser declarada, deve terminar com valor 1 (ou true) se 
    for identidade ou 0 (ou false) se não for.
    Seu código não deve produzir nenhuma saída, apenas garantir que o resultado esteja na variável 
    indicada.

Em cada exemplo, primeiro vêm as dimensões (numero_linhas e numero_colunas) e em seguida os valores da matriz.
*/

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