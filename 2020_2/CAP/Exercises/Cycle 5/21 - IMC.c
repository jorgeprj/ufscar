//Exercicio Proposto 21

/*
O IMC – Indice de Massa Corporal é um critério da Organização Mundial de Saúde para dar 
uma indicação sobre a condição de peso de uma pessoa adulta. A fórmula é: 

IMC = peso/altura^2

Elabore um programa em C para calcular o IMC de uma pessoa e imprimir sua condição de acordo 
com a tabela a seguir:

IMC em adultos      Condição

Abaixo de 18,5	    Abaixo do peso
Entre 18,5 e 25	    Peso normal
Entre 25 e 30	    Acima do peso
Acima de 30	        Obeso

Resolva as condições confusas da questão fazendo uma busca na internet. Além disso, você sabe 
quais seriam as informações de entrada do seu algoritmo?     
*/


#include <stdio.h>

float peso,altura,imc;

int main(){
    //Dados do usuário
    printf("Digite o seu peso (em kg):");
    scanf("%f",&peso);
    printf("Digite a sua altura (em metros):");
    scanf("%f",&altura);
    
    //Cálculo do IMC 
    imc=peso/(altura*altura);
    printf("\n Seu imc é de %.2f",imc);
    
    //Classificando o IMC 
    if (imc<18.5)
    printf("\n ABAIXO DO PESO!");
    else
        if (imc>=18.5 && 25>imc)
            printf("\n PESO NORMAL!");
        else
            if (30>imc && imc>=25)
                printf("\n ACIMA DO PESO!");
            else
                if (imc>=30)
                    printf("\n OBESO!");
                else
                    printf("\n Por favor tente novamente!");

   return 0;
} 