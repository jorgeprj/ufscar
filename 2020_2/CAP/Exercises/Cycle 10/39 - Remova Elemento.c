//Exercicio Proposto 39

/*
Escreva um procedimento que atenda a descrição:
    Nome: remova_item
    Tipo de retorno: void
    Parâmetros (nesta ordem): um vetor de ints no qual não há repetições por referência, o 
    comprimento do vetor (int) por referência, e o valor de um item (int) a ser removido
    Descrição:
    O item deve ser buscado no vetor e, caso encontrado, deve ser removido. A remoção tem que 
    ser feita pela cópia do último elemento do vetor sobre o item e o vetor deve ser reduzido de 
    uma unidade, desconsiderando a última posição. Caso o item não seja localizado, o vetor 
    apenas deve permanecer inalterado.
*/

#include <stdio.h>

void remova_item(int vet[], int *tamanho, int item){
    int pos = 0;
    while(pos < *tamanho && vet[pos] != item)
        pos++;
        
    if(pos < *tamanho){
        vet[pos] = vet[*tamanho - 1];
        (*tamanho)--;
    }
}