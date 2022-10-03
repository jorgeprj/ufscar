//Questão 1

/*
Faça um programa que leia 3 valores reais e informe se formam um triângulo. Se houver 
algum valor nulo ou negativo já é certeza que não formam um triângulo.  Além disso, deve-se 
considerar a regra que vale para qualquer um dos lados que é a seguite: a soma dos outros 
dois lados não pode ser menor nem igual ao lado que está sendo examinado. 

As entradas são 3 valores reais, um em cada linha e a saída é uma palavra simples em inglês: 
YES ou NO. YES significa que forma um triângulo e NO significa que não forma. 
*/


#include <stdio.h>

float m1,m2,m3;
int main()

{
     scanf("\n%f",&m1);
     scanf("\n%f",&m2);
     scanf("\n%f",&m3);
     if ((m1<(m2+m3))&&(m2<(m1+m3))&&(m3<(m1+m2)))
          printf("YES");
     else
          printf("NO");
          
     return 0;
}