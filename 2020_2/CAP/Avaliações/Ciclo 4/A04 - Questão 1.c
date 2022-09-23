//Questão 1

/*
Um ponto em uma coordenada cartesiana é definido como sendo a distância horizontal e a 
distância vertical dele em relação à origem.  Ou seja, o ponto (3,4) está 3 unidades de 
medida distante da origem na horizontal e 4 unidades de medida distante da origem na vertical.

Um ponto em uma coordenada polar é a distância d em relação à origem e a inclinação da 
semi-reta em relação a um dos eixos com origem no ponto de referência. O ponto fixo de 
referência é chamado polo e a semi-reta é chamada de eixo polar. Na figura, o ângulo 
(\ theta \) é medido em relação ao eixo x. 

Você deve fazer um programa em C que leia dois valores x e y que formam um ponto na coordenada 
cartesiana e apresente os valores que representam o mesmo ponto nas coordenadas polares.

A leitura dos valores deve ser feita na seguinte ordem: primeiro o valor x (em uma linha) e 
depois o valor y (em outra linha). Como o programa será corrigido automaticamente, você não 
deve apresentar nenhuma mensagem para leitura e nem para a escrita. A apresentação da resposta 
deve ser a distância em primeiro (em uma linha) e depois o ângulo em graus (em outra linha). 
Utilize a formatação %5.2f para a impressão dos números reais. 

Seu programa deve ler os valores da coordenada cartesiana em reais (positivos ou negativos - ou 
neutro) e informar o ângulo em graus.

Para seus cálculos, considere PI = 3.141592.

Lembrar que as operações com ângulos são feitas em radianos, mas a informação deverá 
ser impressa em graus. 

Exemplo:
>0
>2
> 2.00
>90.00

*/


#include <stdio.h>
#include <math.h>
#define PI 3.141592

float x,p1,y,p2,d;
double t,rad;
double a;

int main(){
     scanf("\n%f",&x);
     scanf("\n%f",&y);
     p1=pow(x,2);
     p2=pow(y,2);
     d=sqrt(p1+p2);
     printf("%5.2f",d);
     a=(-y)/(-x);
     rad=atan(a);
     t=(rad*180)/(3.141592);
     printf("\n%5.2f",t);
     return 0;
}