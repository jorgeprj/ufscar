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
//fun
float function;
float fun(float r, int b){
    x=r;
    function=((pow(x,b))/fat(b));
    
    return function;
}

//principal
int main(void){
    printf("Digite um valor:");
    scanf("%f",&num);
    if ((num>360) || (num<0))
        printf("\nValor inválido.Por favor tente novamente.");
    else 
        rad1=rad(num);
        printf("O valor em radianos é: %f\n",rad1);
//fun 1
    fun1=rad1-(fun(rad1,3));
    printf("\nO valor após a primeira operação é de:%f",fun1);

//fun 2
    fun2=fun1+(fun(rad1,5));
    printf("\nO valor após a segunda operação é de:%f",fun2);

//fun 3
    fun3=fun2-(fun(rad1,7));
    printf("\nO valor após a terceira operação é de:%f",fun3);

//fun 4
    fun4=fun3+(fun(rad1,9));
    printf("\nO valor após a quarta operação é de:%f",fun4);

//fun 5
    fun5=fun4-(fun(rad1,11));
    printf("\nO valor após a quinta operação é de:%f",fun5);

  return 0;
}