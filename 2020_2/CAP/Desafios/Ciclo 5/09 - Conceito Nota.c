//Desafio Proposto 9

/*
Um aluno de computação foi desafiado a produzir uma solução algorítmica para atribuir um 
conceito para um aluno de uma disciplina a partir da média final que o(a) aluno(a) da 
disciplina obteve. Os conceitos A, B, C ou D deveriam ser atribuídos da seguinte forma: 

Tabela Notas - Conceitos

Condição 	O conceito deverá ser 
MF ≥ 9              A
7 ≤ MF < 9	        B
6 ≤ MF < 7	        C
MF < 6	            D

Faça um programa em C para resolver este problema.
*/


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