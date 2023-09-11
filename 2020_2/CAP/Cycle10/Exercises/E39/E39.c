

#include <stdio.h>

void desloque_menor(int vet[], int tamanho){
    int menor = vet[0];
    int posicao_menor = 0;

    for(int i = 1; i < tamanho; i++)
        if(vet[i] < menor){
            menor = vet[i];
            posicao_menor = i;
        }

    vet[posicao_menor] = vet[0];
    vet[0] = menor;
}