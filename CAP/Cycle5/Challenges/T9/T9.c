#include <stdio.h>

int m;
int main(){
  //Dados do usuário
  printf("Digite a média final do aluno:");
  scanf("%d",&m); 

  //Definindo o conceito
  switch (m){
  //Conceito C
  case 6:
    printf("CONCEITO C!");
    break;
  //Conceito B
  case 7:
  case 8:
    printf("CONCEITO B!");
    break;
  //Conceito A
  case 9:
  case 10:
    printf("CONCEITO A!");
    break;
  //Conceito D
  default:
    printf("CONCEITO D!");
  }

  return 0;
} 