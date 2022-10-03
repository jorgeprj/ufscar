//Exercicio Proposto 37

/*
Escreva as instruções necessárias para que os dados de um vetor fiquem em ordem inversa.

Para tanto, troque o conteúdo da primeira posição com o da última, o da segunda com a 
penúltima e assim sucessivamente.
O vetor deve se chamar vet e considere-o com tipo base double. A quantidade de elementos 
válidos no vetor é dada pela variável tamanho.

Não é permitida a declaração de outro vetor para auxiliar na solução.

void resposta(double vet[], int tamanho){
    // seu código deve vir aqui
}
*/

#include <stdio.h>

void resposta(double vet[], int tamanho){
    for(int i = 0; i < tamanho/2; i++){
        double tmp = vet[i];
        vet[i] = vet[tamanho-1 -i];
        vet[tamanho-1 - i] = tmp;
    }
}