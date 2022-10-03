//Questão 2

/*
Um ponto em uma coordenada cartesiana é definido como sendo a distância horizontal e a 
distância vertical dele em relação à origem.  Ou seja, o ponto (3,4) está 3 unidades de 
medida distante da origem na horizontal e 4 unidades de medida distante da origem na vertical. 

Um ponto em uma coordenada polar é a distância d em relação à origem e a inclinação da 
semi-reta em relação a um dos eixos com origem no ponto de referência. O ponto fixo de 
referência é chamado polo e a semi-reta é chamada de eixo polar. Na figura, o ângulo 
(\ theta \) é medido em relação ao eixo x. 

Você deve fazer um programa em C que leia dois valores D e Theta que formam um ponto na 
coordenada polar e apresente os valores que representam o mesmo ponto na coordenadaa cartesiana. 
Basicamente, é o inverso do outro exercício.

A leitura dos valores deve ser feita na seguinte ordem: primeiro o valor D (em uma linha) e 
depois o valor Theta (em outra linha). Como o programa será corrigido automaticamente, você 
não deve apresentar nenhuma mensagem para leitura e nem para a escrita. A apresentação da 
resposta deve ser a coordenada x em primeiro (em uma linha) e depois a coordenada y 
(em outra linha). Utilize a formatação %5.2f para a impressão dos números reais. 

Seu programa deve ler os valores da coordenada polar em reais (positivos ou negativos - 
ou neutro) e informar as coordenadas cartesianas em reais. O ângulo deve ser informado 
em graus e, obviamente, deverá ser convertido em radianos para as operações. 

Para seus cálculos, considere PI = 3.141592

Exemplo:
>2
>90
>  0.00
>  2.00   
*/


#include <stdio.h>
#include <math.h>
#define PI 3.141592

double x,t1,y;
float d,t;

int main(){
     scanf("\n%f",&d);
     scanf("\n%f",&t);
     t1=t*3.141592/180;
     x=d*cos(t1);
     y=d*sin(t1);
     printf("%5.2f",x);
     printf("\n%5.2f",y);
     
     return 0;
}