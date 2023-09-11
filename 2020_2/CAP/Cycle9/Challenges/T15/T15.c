#include <stdio.h>

struct ded_ponto{
  int x;
  int y;
};

typedef struct ded_ponto ponto;

int PontoMedio(ponto A, ponto B){
  ponto C;
  C.x=(A.x+B.x)/2;
  C.y=(A.y+B.y)/2;

  return(printf("O ponto médio é:(%d,%d)",C.x,C.y));
}

int main(void){
  
  struct ded_ponto A;
  struct ded_ponto B;
  struct ded_ponto C;
  
  printf("Digite o primeiro ponto (x,y):");
  printf("\nX:");
  scanf("%d",&A.x);
  printf("Y:");
  scanf("%d",&A.y);
  
  printf("Digite o segundo ponto (x,y):");
  printf("\nX:");
  scanf("%d",&B.x);
  printf("Y:");
  scanf("%d",&B.y);
  
  PontoMedio(A,B);

  return(0);
}
