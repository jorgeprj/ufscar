//Exercicio Proposto 38

/*
Escreva um procedimento completo em C com a seguinte especificação:
    Nome: desloque_menor
    Tipo de retorno: void
    Parâmetros: um vetor de ints por referência e seu comprimento (int)
    Descrição:
    O menor elemento do vetor deve ser colocado na primeira posição do vetor. Para preservar 
    o conteúdo da primeira posição, seu valor deve ser colocado na mesma posição onde o menor 
    valor estava. Nenhum dos demais valores do vetor deve ser modificado.
    O vetor contém pelo menos comprimento igual a 1.
*/

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