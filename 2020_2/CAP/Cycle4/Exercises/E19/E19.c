#include <stdio.h>

float n1,n2,n3,media;

int main(){

     printf("Digite a primeira nota:");
     scanf("%f",&n1);
     printf("Digite a segunda nota:");
     scanf("%f",&n2);
     printf("Digite a terceira nota:");
     scanf("%f",&n3);
     media=(((n1*1) + (n2*2) + (n3*3))/6);
     printf("A média ponderada é %2.2f",media);

     return 0;
}  