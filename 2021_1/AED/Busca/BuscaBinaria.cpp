#include <iostream>
using namespace std;

int buscaBin(int vetor[], int tamanho, int valor, int &contador){
    int comeco=0;
    int final=tamanho-1;
    int meio;
    contador=0;
    while (comeco<=final){
        contador++;
        meio=(comeco+final)/2;
        if (valor==vetor[meio])
            return meio;
        else 
            if (valor<vetor[meio])
                final=meio-1;
            else
                comeco=meio+1;
    }   

    return -1; // não encontrado
}