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