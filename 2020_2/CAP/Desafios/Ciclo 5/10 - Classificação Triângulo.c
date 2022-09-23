//Desafio Proposto 9

/*
Escreva um programa em C que leia 3 medidas que, supostamente, podem ser de um triângulo. 
O algoritmo deverá, primeiramente, verificar se as medidas formam um triângulo. Se não formarem, 
uma mensagem deverá ser fornecida ao usuário. Caso formem um triângulo, o algoritmo deverá 
classificá-lo em: equilátero (3 lados iguais); isósceles (2 lados iguais) ou escaleno (preciso 
explicar?).  Dica: Para formar um triângulo, cada lado deve ser menor que a soma dos outros 
dois lados.
*/


#include <stdio.h>

float m1,m2,m3,ok;

int main(){
    //Dados do usuário
    printf("Digite a primeira medida:");
    scanf("%f",&m1); 
    printf("Digite a segunda medida:");
    scanf("%f",&m2);
    printf("Digite a terceira medida:");
    scanf("%f",&m3);

    //Verificando se pode formar um triângulo
    if ((m1<(m2+m3))&&(m2<(m1+m3))&&(m3<(m1+m2)))
        ok=0;
    else {
        printf("Com essas medidas é impossível montar um triângulo!");
    return 0;
    }

    //Definindo o tipo de triângulo
    if (ok==0){
        if ((m1==m2)&&(m2==m3)&&(m1==m3))
            printf("Triângulo Equilátero");
        else 
        if ((m1!=m2)&&(m1!=m3)&&(m2!=m3))
            printf("Triângulo escaleno");
        else
            printf("Triângulo Isósceles");
    }
    return 0;
} 