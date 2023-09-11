#define COLUNAS 100

void preencha_zeros(double mat[][COLUNAS], int linhas, int colunas){
    for(int i = 0; i < linhas; i++)
        for(int j = 0; j < colunas; j++)
            mat[i][j] = 0;
}