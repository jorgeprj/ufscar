void resposta(double vet[], int tamanho){
    for(int i = 0; i < tamanho/2; i++){
        double tmp = vet[i];
        vet[i] = vet[tamanho-1 -i];
        vet[tamanho-1 - i] = tmp;
    }
}