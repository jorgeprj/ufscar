//Desafio Proposto 15

/*
Faça uma função que receba como parâmetros os pontos A e B e retorne o ponto médio entre os dois 
pontos. O ponto médio entre os pontos (0,10) e (0,20) é (0,15). O ponto médio entre os pontos 
(10,10) e (20,20) é (15,15).  Assim, a função PontoMedio deverá retornar o ponto médio entre os 
dois pontos em um plano cartesiano. 
*/


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
