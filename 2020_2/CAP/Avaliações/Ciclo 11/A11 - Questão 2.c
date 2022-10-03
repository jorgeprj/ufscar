//Questão 2

/*
Considere uma matriz já existente que possui as seguintes característica:
    O identificador da variável é mat;
    Tem tipo base int;
    Possui dimensões linhas×colunas, ambos valores inteiros;
    Tem todos seus valores já previamente preenchidos.

Escreva os comandos necessários para fazer a transposição da matriz, considerando que ela 
será sempre quadrada.
Assim, linhas=colunas.

Declare as variáveis auxiliares que precisar.

Não use uma matriz auxiliar; apenas troque os elementos na própria matriz.
(Você provavelmente terá um erro de segmentation fault caso tente declarar outra matriz.)
*/

#include <stdio.h>

void transpo(int linhas, int colunas, int mat){
    int *i, *j, aux;
  
    for (i = 0; i < linhas; i++) {
        for (j = i+1; j < colunas; j++) {
            if (j != i) {
                aux = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = aux;
            }
        }
  } 
}
