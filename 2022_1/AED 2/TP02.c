#include <stdio.h>
#include <stdlib.h>
/*
  Data que foi realizado: 27/08/2022
  Algoritmos e Estrtura de Dados 2
    Segundo Trabalho Prático - Distância Genômica
      Nome: Jorge Luiz Medeiros Pires
      RA: 790942
*/

unsigned long long intercalaContando(int v[], int p, int q, int r) {
    // dois subvetores sendo: [p..q-1] [q..r-1]
    int i, j, k, tam;
    unsigned long long numInversoes = 0;

    i = p; 
    j = q; 
    k = 0;
    tam = r - p;

    // w = vetor que recebera os elementos ordenados
    int *w = (int*) malloc(tam * sizeof(int));

    while (i < q && j < r) { // percorre os dois subvetores ate o fim
        if (v[i] <= v[j]) 
            w[k++] = v[i++];
        else { // v[i] > v[j]
            w[k++] = v[j++];
            numInversoes += q - i;
        }
    }

    // casos em que algum vetor nao foi percorrido ate o fim 
    while (i < q)
        w[k++] = v[i++];

    while (j < r)
        w[k++] = v[j++];

    for (k = 0; k < tam; k++)
        v[p + k] = w[k];

    free(w);

    return numInversoes;
}

unsigned long long mergeSort(int arr[], int p, int r) {
    unsigned long long numInversoes = 0;

    int q;

    if (r - p > 1) {
        q = (p + r) / 2; // metade do vetor para enviar a funcao intercalaContado()

        numInversoes += mergeSort(arr, p, q);
        numInversoes += mergeSort(arr, q, r);
        numInversoes += intercalaContando(arr, p, q, r);
    }

    return numInversoes;
}

int main(int argc, char const *argv[]) {

    char fileName[100];
    scanf("%s", fileName);

    FILE *f;
    f = fopen(fileName, "r");

    int qtdTermos;
    fscanf(f, "%d", &qtdTermos);

    int *v = malloc(qtdTermos * sizeof(int));
    for (long i = 0; i < qtdTermos; i++)
        fscanf(f, "%d", &v[i]);

    unsigned long long distanciaGenomica = mergeSort(v, 0, qtdTermos);

    printf("%llu\n", distanciaGenomica);

    fclose(f);
    free(v);

    return 0;
}



