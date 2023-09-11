double resposta(double vet[], int tamanho){
    double soma = 0;
    int cont = 0;

    for(int i = 0; i < tamanho; i++)
        if(vet[i] > 0){
            soma += vet[i];
            cont++;
        }
        
    double media;
    
    if(cont == 0)
        media = -1;
    else{
        media = soma/cont;
    }

    return media;
}