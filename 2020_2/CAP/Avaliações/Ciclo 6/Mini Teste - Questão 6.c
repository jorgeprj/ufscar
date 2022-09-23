//Mini Teste - Questão 6

/*
Considere o trecho de código a seguir:

#include <stdio.h>

int main(void){
    char frase[20];  // cadeia de caracteres com tamanho 20 
    char *p;               // ponteiro para um caractere
    int i;

    p = &frase[0]; // aponta para a primeira posição da cadeia de caracteres

    scanf("%[^\n]%*c",frase);

    // trocar a letra a por u

    // coloque aqui vem o código de troca das vogais usando ponteiro

    printf("%s\n",frase);

    return 0;
}
*/

#include <stdio.h>

int main(void){
    char frase[20]; 
    int i;

    scanf("%[^\n]%*c",frase);
    
    for(i=0; frase[i]; i++)
        if(frase[i]=='a')
            frase[i]='u';

    printf("%s\n",frase);

    return 0;
}