//Exercicio Proposto 30

/*
Considere a seguinte definição:

x^n={
        1 ⇒ n = 0
        x.x^(n−1)n > 0
    }

Tente fazer uma função recursiva em C que seja compatível com essa definição.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int x,n,pot;

int potencia(int x, int n){
    pot=(pow(x,n));
    return pot;
}

int x,n,p;
int main(){
    scanf("%d",&x);
    scanf("%d",&n);

    if (n==0)
        p=1;

    if (n>0)
        p=x*(potencia(x,(n-1)));

    printf("%d",p);
    return 0;
}
