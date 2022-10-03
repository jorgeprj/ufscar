//Desafio Proposto 16

/*
Dados dois pontos A e B é possível construir uma equação geral de uma reta:

Reta = (Ay -By) x + (Bx - Ax) y + (Ax * By - Bx * Ay)

Faça uma função em C que receba dois pontos e retorne a equação de uma reta. 
*/

#include <stdio.h>
#include <stdio.h>

struct ded_ponto{
    int x;
    int y;
};

typedef struct ded_ponto ponto;

int EquacaoDaReta(ponto A, ponto B){
  int RetaX;
  int RetaY;
  int RetaC;

  RetaX=(A.y-B.y);
  RetaY=(B.x-A.x);
  RetaC=((A.x*B.y)-(B.x*A.y));

  return(printf("A equação da reta: %dx + %dy + %d",RetaX,RetaY,RetaC));
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
  
  EquacaoDaReta(A,B);

  return(0);
}