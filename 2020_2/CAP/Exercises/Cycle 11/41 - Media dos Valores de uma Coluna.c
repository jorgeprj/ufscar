//Exercicio Proposto 41

/*
Escreva o código necessário para calcular a média dos valores de uma das colunas de uma matriz.

Considere:
    A matriz se chama mat e já foi declarada e preenchida com valores;
    As dimensões da matriz estão definidas em duas variáveis já existentes: numero_linhas e 
    numero_colunas (ambas int);
    A coluna que deve ser usada para a média é a indicada pela variável coluna, que já contém 
    o valor  desejado;
    O valor da média deve ser colocado em uma variável chamada media_coluna, que tem que ser 
    declarada;
    Seu código não deve produzir nenhuma saída, apenas garantir que a soma esteja na variável 
    indicada.

Em cada exemplo, na entrada, o primeiro valor é o valor de coluna, em seguida vêm as dimensões 
(numero_linhas e numero_colunas) e em seguida os valores da matriz.
*/

#include <stdio.h>

int main(void){
    int mat[10][10];
    int linhas;
    int coluna;
    
    double soma = 0;
    for(int c = 0; c < linhas; c++)
        soma += mat[c][coluna];
    double media_coluna = soma/linhas;
    
    return 0;
}