//Exercicio Proposto 40

/*
Escreva o código necessário para somar os valores de uma das linhas de uma matriz.

Considere:
    A matriz se chama mat e já foi declarada e preenchida com valores;
    As dimensões da matriz estão definidas em duas variáveis já existentes: numero_linhas 
    e numero_colunas (ambas int);
    A linha que deve ser usada na soma é a indicada pela variável linha, que já contém o valor 
    desejado;
    O valor da soma deve ser colocado em uma variável chamada soma_linha, que tem que ser declarada;
    Seu código não deve produzir nenhuma saída, apenas garantir que a soma esteja na variável 
    indicada.

Em cada exemplo, o primeiro valor é o valor de linha, em seguida vêm as dimensões 
(numero_linhas e numero_colunas) e em seguida os valores da matriz.
*/

#include <stdio.h>

int main(void){
    double soma_linha = 0;
    int mat[10][10];
    int linha;
    int coluna;
    
    for(int c = 0; c < coluna; c++)
        soma_linha += mat[linha][c];
    
    return 0;
}