//Desafio Proposto 14

/*
Faça um procedimento em C que retorne o quociente e o resto da divisão de um número 
inteiro A por outro inteiro B.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float num,rad1,x,fun0,fun1,fun2,fun3,fun4,fun5;

//fatorial
int i,n,fatorial;

int fat(int n1){
    fatorial=1;
    for(i=2;i<=n1;i++){
    fatorial=fatorial*i;
    }
    
    return fatorial;
}

//radianos
float radianos;

float rad(float ang){
    radianos=(ang*3.141592)/(180);
    
    return radianos;
}

//graus
double graus;

double grau(double radi){
    graus=(radi*180)/(3.141592);

    return graus;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a, b, resto,result;

//Procedimento
float pdivisao(){
    printf("Digite o numero A: ");
    scanf("%d", &a);
    printf("Digite o numero B: ");
    scanf("%d", &b);
    resto=a%b;
    int result=a/b;
    printf("O quociente da divisão de %d por %d é %d\n",a,b,result);
    printf("O resto da divisão de %d por %d é %d\n",a,b,resto);
}
 
int main(){
    pdivisao();
    
    return 0;
}