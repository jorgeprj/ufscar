//Questão 4

/*
Escreva uma função em C para verificar se um vetor contém tanto letras minúsculas 
quanto maiúsculas (e não somente uma categoria).
Sua função deve:
    Ter nome verifica_caso;
    Ter como único parâmetro um vetor de char;
    Ter como valor de retorno da função o valor 1 (ou true) caso o teste seja bem sucedido
    ou 0 (ou false) caso falhe.

O vetor de entrada conterá exclusivamente as letras de A a Z e de a a z.
Depois da sequência de letras existirá sempre o caractere $, que deve ser usado para terminar a verificação.

Para testar um caractere simples, já existe uma função caso que retorna M se maiúscula ou m se minúscula.
Exemplo de uso da função caso:
    char letra = 'A';
    printf("%c\n", caso(letra)); // a saída será 'M'
    if(caso(letra) == 'm')
        printf("minuscula!\n"); // nao produz saida neste exemplo
*/

#include <stdio.h>

int verifica_caso(char vet[]){
    int i;
    int valor=0;
    int valor2=0;

    for(i=0;i<100;i++){
        if(vet[i]=='$'){
            i=100;
        }
        else if(vet[i]>='a' && vet[i]<='z'){
            valor=1;
        }
    }

    for(i=0;i<100;i++){
        if(vet[i]=='$'){
            i=100;
        }
        else if(vet[i]>='A' && vet[i]<='Z'){
            valor2=1;
        }

        if((valor==1) && (valor2==1)){
            return 1;
        }
        else{
            return 0;
        }
    }
}

//Teste
int main(void){
    int ok;

    char vet[4] = {'D','o','c','E'};

    ok = verifica_caso(vet);
    printf("%d",ok);
    return 0;
}