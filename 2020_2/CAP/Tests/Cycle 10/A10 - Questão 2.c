//Questão 2

/*
Escreva o código necessário para criar um vetor seguindo as restrições:
    tipo base double;
    nome vet;
    capacidade para n elementos, sendo n uma variável que você deve declarar e ler(o nome desta 
    variável é irrelevante);
    todas as posições devem ser preenchidas com −1.

Assuma que n sempre é maior que zero.
O vetor tem que ter exatamente n elementos.
*/

#include <stdio.h>

int main(void){
    int n,i;
    scanf("%d",&n);
    double vet[n];
    
    for(i=0;i<n;i++){
    vet[i]=-1;   
    }
    return 0;
}