//Exercicio Proposto 44

/*
Escreva uma sub-rotina para preencher uma matriz inteira com valores nulos.

Veja no caso de teste o exemplo da chamada da função que você terá que elaborar!

Assuma que a matriz tenha a seguinte declaração:
    double mat[LINHAS][COLUNAS];

As variáveis linhas e colunas indicam a parte da matriz que deve ser preenchida com zeros.
*/

#define COLUNAS 100

void preencha_zeros(double mat[][COLUNAS], int linhas, int colunas){
    for(int i = 0; i < linhas; i++)
        for(int j = 0; j < colunas; j++)
            mat[i][j] = 0;
}