#include <stdio.h>
#include <string.h>

int main(){

  int n,m;
  //definindo n = Numero de palavras, m = numero de textos
  scanf("%d %d", &n, &m);

  //definindo uma tabela de valores
  typedef struct {
    char plvr[30];
    int valor;
  }Palavras;
  
  Palavras palavras[n];

  int i;

  //lendo as palavras e alocando na tabela
  for(i=0;i<=n-1;i++){
    scanf("%s %d", palavras[i].plvr, &palavras[i].valor);
   }

  int j,k;
  char palavraTexto[30];
  
  //lendo palavra por palavra 
  //cria um loop da quantidade de texto(m)
  for(k=0;k<=m-1;k++){
    int resposta = 0;
    scanf("%s",palavraTexto);

    //compara cada palavra com o "." para definir quando o texto acaba
    while(strcmp(palavraTexto,".") > 0){
      //compara cada palavra com as palavras da tabela  
      for(j = 0; j < n; j++){
          if(strcmp(palavraTexto, palavras[j].plvr) == 0){
            resposta = resposta + palavras[j].valor;
            break;
          }   
        }
          //desconta -10 para cada palavra q for diferente das palavras da tabela
          if(j == n)
            resposta = resposta - 10;
          
        scanf("%s",palavraTexto);   
        }

    printf("%d\n", resposta);
    }
  return 0;
}