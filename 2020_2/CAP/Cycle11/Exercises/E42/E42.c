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