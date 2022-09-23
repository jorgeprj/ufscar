#include <iostream>
using namespace std;

int buscaSeq(int vetor[], int tamanho, int valor, int &contador){
    int i;
    contador=0;
    for(i=0;i<tamanho;i++){
        contador++;
        if(vetor[i]==valor){
            return i;
        }
    }
    
    return -1; // não encontrado
}