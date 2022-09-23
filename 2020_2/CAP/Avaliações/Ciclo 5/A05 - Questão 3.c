//Questão 3

/*
Um triângulo pode ser retangulo, acutângulo ou obtusângulo. Um triângulo retangulo é aquele 
que um dos lados tem 90 graus. Um trângulo acutângulo é aquele em que todos os ângulos são 
menores que 90 graus e o triângulo obtusângulo é aquele que um dos lados é maior que 90 graus. 

Você deve fazer um programa que leia as medidas dos ângulos internos de um  triângulo e 
informe se ele é RETANGULO, ACUTANGULO ou OBTUSANGULO. Claro que se os ângulos não somarem 
180 graus, uma mensagem de erro deverá ser apresentada. Vamos considerar apenas a palavra 
ERRO para a mensagem de erro. 

Os ângulos informados devem estar entre 0 e 180 graus e tanto a leitura como a escrita não 
devem conter quaisquer outras informações. 

Exemplo:
>90
>45
>45
>RETANGULO 
*/


#include <stdio.h>

float a1,a2,a3;
int main()

{
     scanf("\n%f",&a1);
     scanf("\n%f",&a2);
     scanf("\n%f",&a3);
     if (a1+a2+a3!=180){
     printf("ERRO");
     }
     else 
      if ((a1==90)||(a2==90)||(a3==90)){
      printf("RETANGULO");
      }
      else 
       if ((a1>90)||(a2>90)||(a3>90)){
       printf("OBTUSANGULO");
       }
       else 
        printf("ACUTANGULO");
     return 0;
}