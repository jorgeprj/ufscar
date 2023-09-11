//Questão 5

/*
Considere a seguinte estrutura de dados:
    struct info{
        int tamanho;
        int dado[TAMANHO_MAXIMO];
    };

Ela mantém os dados no campo dado, sendo válidos apenas os tamanho primeiros elementos.
Os demais elementos contém lixo.

Escreva uma função considerando:
    A função deve ter nome altere_dados;
    A função deve ser void e receber um struct info por referência;
    Todos os valores válidos negativos do vetor devem ser substituídos pelo menor valor 
    encontrado no vetor.
*/

#include <stdio.h>
#define TAMANHO_MAXIMO 50


struct info{
    int tamanho;
    int dado[TAMANHO_MAXIMO];
};


void altere_dados(struct info *teste){
  int i;
  int menor;
  menor = teste->dado[0];

  for (int i = 0; i < teste->tamanho; ++i) {
    if (teste->dado[i] < menor) 
    menor = teste->dado[i];
    }
  
  for (i=0;i<teste->tamanho;i++){
    if (teste->dado[i]<0)
    teste->dado[i]=menor;
  }
}