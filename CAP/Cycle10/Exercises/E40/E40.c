void remova_item(int vet[], int *tamanho, int item){
    int pos = 0;
    while(pos < *tamanho && vet[pos] != item)
        pos++;
        
    if(pos < *tamanho){
        vet[pos] = vet[*tamanho - 1];
        (*tamanho)--;
    }
}