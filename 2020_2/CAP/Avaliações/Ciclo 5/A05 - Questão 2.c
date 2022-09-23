//Questão 2

/*
Faça um programa em C que leia 3 valores inteiros distintos e os coloque em ordem crescente.  
Por exemplo: 
>3 
>5 
>2 
>2 
>3 
>5

Os valores devem ser impressos, um em cada linha. Lembre-se que o programa será corrigido 
automaticamente, portanto, não coloque nenhuma mensagem nem na entrada nem na saída de dados.  
*/


#include <stdio.h>

int main(){
  int n1, n2, n3;       
  
  scanf("%d",&n1);
  scanf("%d",&n2);
  scanf("%d",&n3);
  
  if (n1 <= n2 && n2 <= n3){
    printf("%d\n%d\n%d\n", n1, n2, n3);
  }
  else 
    if (n1 <= n3 && n3 <= n2){
      printf("%d\n%d\n%d\n", n1, n3, n2);
    }
    else 
      if (n2 <= n1 && n1 <= n3){
        printf("%d\n%d\n%d\n", n2, n1, n3);
      }
      else 
      if (n2 <= n3 && n3 <= n1){
        printf("%d\n%d\n%d\n", n2, n3, n1);
      }
      else 
        if (n3 <= n1 && n1 <= n2) {
          printf("%d\n%d\n%d\n", n3, n1, n2);
        }
        else{
          printf("%d\n%d\n%d\n", n3, n2, n1);
        }

  return 0;
}