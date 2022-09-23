#include <iostream>
using namespace std;

void ordenaVetor(int vetor[],int tamanho,int contador){ //Ordenação por seleção
    int i, j, min, aux;
    int ultima=tamanho-1;
    contador=0;
    
    for(i=0;i<ultima;i++){
        min=i;
        for(j=(i+1);j<tamanho;j++) {
            if(vetor[j]<vetor[min])
                min=j;
        }
        if(vetor[i]!=vetor[min]){
        aux=vetor[i];
        vetor[i]=vetor[min];
        vetor[min]=aux;
        }
    }
}
    
void display(int vetor[],int tamanho){
    int i;
    for(i=0;i<tamanho;i++)
        cout<<vetor[i]<<"-";
    
}

int main(){
    int tamanho=10;
    int contador;
    int vet[10]={100,99,77,66,88,11,22,44,33,55};
    display(vet,tamanho);
    cout<<endl;
    ordenaVetor(vet,tamanho,contador);
    cout<<contador<<endl;
    cout<<endl;
    display(vet,tamanho);

    return 0;
}