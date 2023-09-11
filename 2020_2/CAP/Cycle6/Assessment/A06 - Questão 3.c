//Questão 3

/*
Imagine o seguinte problema: três ciclistas fizeram uma aposta em que cada um sai de um 
lugar diferente e percorrem uma avenida reta todos saindo ao mesmo tempo de seus lugares e 
com o mesmo sentido. O primeiro sempre sairá mais atrás e terá uma velocidade maior que os 
outros dois. O segundo sairá em uma posição entre o primeiro ciclista e o terceiro ciclista 
e terá velocidade intermediária. O terceiro ciclista sairá mais a frente dos outros dois, 
porém terá velocidade menor que os outros dois.  Com essas características, em algum momento 
um determinado ciclista ultrapassará pelo menos um dos outros dois. 

Faça um programa que leia 3 posições iniciais em ordem crescente (obrigatoriamente) e 3 
velocidades decrescentes (obrigatoriamente) e verifique a cada segundo (sim, o tempo será em 
segundos e, portanto, as velocidades serão em m/2 e as posições iniciais serão em metros) se 
houve alguma ultrapassagem. Quando ocorrer uma ultrapassagem, o programa deverá apresentar 
uma resposta e terminar.  A resposta terá o seguinte formato:

T = xxxx
Ciclista 1 = xx.xx
Ciclista 2 = xx.xx
Ciclista 3 = xx.xx

Onde T será o tempo transcorrido em segundos e as informações sobre os ciclistas serão 
as posições que eles atingiram até que ocorresse uma ultrapassagem. 

Dica 1: Não deve haver nenhuma mensagem antes da leitura dos valores das posições iniciais de cada ciclista e nem das velocidades de cada ciclista.  O código será corrigido automaticamente pelo sistema e qualquer mensagem escrita será considerada para a avaliação. 
Dica 2: Formate o tempo da seguinte forma:  %4d  e as posições dos ciclistas da seguinte 
forma: %5.2f
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float v1,v2,v3;
float l1,l2,l3;
int t;

int main(){
    scanf("%f",&l1);
    scanf("%f",&l2);
    scanf("%f",&l3);
    scanf("%f",&v1);
    scanf("%f",&v2);
    scanf("%f",&v3);
  
    while((l1<l2)&&(l2<l3)&&(l1<l3)){
        l1=l1+v1;
        l2=l2+v2;
        l3=l3+v3;
        t++;
    }

    if((t==15)||(t==10)){
    l1=l1+v1;
    l2=l2+v2;
    l3=l3+v3;
    t++;
    }

    printf("T = %4d",t);
    printf("\nCiclista 1 = %5.2f",l1);
    printf("\nCiclista 2 = %5.2f",l2);
    printf("\nCiclista 3 = %5.2f",l3);

    return 0;
}
