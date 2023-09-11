//Questão 1

/*
Logo teremos mais uma competição olímpica: Os jogos olímpicos de Tokyo. Uma das competições 
que chama bastante a atenção dos espectadores é o revezamento 4 x 400. Cada raia tem uma equipe 
com 4 competidores e cada equipe tem um bastão que deve ser passado para o companheiro de equipe
depois de 400m de corrida. Assim, o primeiro corredor sai com o bastão e, depois de 400m, ele 
transfere o bastão para o segundo corredor e assim por diante. Claro que a velocidade média de 
cada corredor da mesma equipe pode ser diferente das velocidades médias dos companheiros de 
equipe! 

Imagine que para uma das competições existem X equipes (mínimo de 4 e máximo de 8) e somente 
uma delas se classifica para a próxima fase. Cada competidor de cada equipe tem sua velocidade 
média específica. Você deverá fazer um programa para indicar qual a equipe que se classificará 
para a próxima fase. Será a equipe cujo quarto corredor cruzar primeiro a linha de chegada 
(1.600m). Seu programa deverá ler as velocidades médias de cada corredor (começando pelos 
corredores da equipe 1 e terminando com os corredores da equipe 4). Dentro de cada equipe, 
as velocidades lidas serão respectivamente do corredor 1, corredor 2, corredor 3 e corredor 4. 
As velocidades médias são em km/h.

Assim, seu programa deverá ler, primeiramente, o número de equipes (X) e, em seguida, as 
velocidades dos corredores. Depois, deverá simular a corrida deles e apresentar a resposta, 
que deverá ser a ordem das equipes que cruzaram a linha de chegada, sendo a primeira equipe a 
que cruzou em primeiro e a última equipe a que cruzou por último. 

Dicas: 
1. Pense no quesito que define um vencedor;
2. Dentro do possível, utilize estruturas de dados para auxiliar na solução do problema;
3. Dentro do possível, utilize funções e procedimentos que possam auxiliar na solução do problema;
4. Não se esqueça que a numeração das equipes começa em 1. 
5. Comente o código
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n1,n2,n3,resultado,resultado2;
float v1,v2,v3;

int MMC(int num1, int num2){
    int x,y,r,mmc;   
    x = num1;
    y = num2;
    do{
        r = x % y;
        x = y;
        y = r;
    }while (r != 0);

    mmc = (num1 * num2) / x;

    return mmc;
 }

int main(void){
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    resultado=MMC(n1,n2);
    resultado2=MMC(resultado,n3);
    printf("T = %4d",resultado2);
   
    //Voltas
    v1=resultado2/n1;
    v2=resultado2/n2;
    v3=resultado2/n3;
    printf("\nCiclista 1 = %5.2f",v1);
    printf("\nCiclista 2 = %5.2f",v2);
    printf("\nCiclista 3 = %5.2f",v3);

    return 0;
}