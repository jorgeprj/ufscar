//Exercicio Proposto 42

/*
Escreva o código necessário para determinar o índice da linha da matriz que contém a menor soma.

Considere:
    A matriz se chama mat e já foi declarada e preenchida com valores;
    As dimensões da matriz estão definidas em duas variáveis já existentes: numero_linhas e 
    numero_colunas (ambas int);
    O valor do índice da linha com menor soma deve ser colocado em uma variável chamada 
    indice_menor, que tem que ser declarada;
    Caso haja duas linhas com a mesma soma, o índice da primeira ocorrência deve ser indicado;
    Seu código não deve produzir nenhuma saída, apenas garantir que o índice esteja na variável 
    indicada.

Em cada exemplo, primeiro aparecem as dimensões (numero_linhas e numero_colunas) e em seguida 
os valores da matriz.
*/

#include <stdio.h>

int main(void){
    int mat[10][10];
    int linhas;
    int colunas;
    int indice_menor = 0;
    double menor_soma = 1e308;

    for(int i = 0; i < linhas; i++){
        double soma = 0;
        for(int j = 0; j < colunas; j++)
            soma += mat[i][j];
        if(soma < menor_soma){
            menor_soma = soma;
            indice_menor = i;
        }
    }
    
    return 0;
}