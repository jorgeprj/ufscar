void resposta(double vet1[], int tamanho1, double vet2[], int tamanho2){

    int i = 0;

    int iguais = (tamanho1 == tamanho2);
    while(i < tamanho1 && iguais){
        iguais = (vet1[i] == vet2[i]);
        i++;
    }

    if(iguais)
        printf("iguais\n");
    else
        printf("diferentes\n");

 }