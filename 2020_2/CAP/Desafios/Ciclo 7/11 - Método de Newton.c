//Desafio Proposto 11

/*
Newton descobriu um método para aproximar os valores das raízes de uma equação numérica, 
aplicável tanto para equações algébricas como para equações transcendentes. A variante desse 
método, hoje é conhecido como Método de Newton, e você desenvolveu o algoritmo para responder o 
primeiro desafio lá do ciclo 3. 

Seu primeiro desafio será, portanto, fazer um programa em C que leia um número inteiro positivo 
(N) e chame uma função escrita por você, utilizando o algoritmo descrito, que calcule e retorne 
a raiz R (com um erro < 0,01).  Se quiser, compare o resultado obtido pelo algoritmo que você 
elaborou com o resultado obtido pela chamada da função matemática pré-definida pela linguagem. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numero;
float x,x0,x1,x_ideal,x2,erro;
float fx,fxx;
float raiz1,raiz2;
float x00,n1,resultado;

//Cálculo
float calculo(float x00,float n1){
    x=(x0);
    fx=((pow(x,2))-numero);
    fxx=(2*x);
    x1=(x0-(fx/fxx));
    x_ideal=(x1-x0);

    if (x_ideal<0)
        x_ideal=(x_ideal*-1);
    else
        x_ideal=(x_ideal*1);

    do{
        x=x1;
        fx=((pow(x,2))-numero);
        fxx=(2*x);
        x2=(x1-(fx/fxx));
        x_ideal=(x2-x1);

    if (x_ideal<0)
        x_ideal=(x_ideal*-1);
    else
        x_ideal=(x_ideal*1);
  
    x1=x2;
    x2=0;
 }while (x_ideal<erro);
  
  return x1;

}
//Principal
int main(void){
    printf("Digite um número inteiro positivo:");
    scanf("%d",&numero);
    printf("Digite a primeira aproximação:");
    scanf("%f",&x0);
    erro=0.01;
    resultado=calculo(x0,numero);
    printf("%f",x1);
    
    return 0;
}