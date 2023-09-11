int mes,ano,dia;
float a,b,c,d,e,f,g,h,i,j;

int main(){
    //Dados do usuário
     printf("Digite o dia:");
     scanf("%d",&dia);
     printf("Digite o mês:");
     scanf("%d",&mes);
     printf("Digite o ano:");
     scanf("%d",&ano);

    //Cálculo para descobrir o dia da semana
     int a=((12-mes)/10);
     b=ano-a;
     c=mes+(12*a);
     int d=b/100;
     int e=d/4;
     f=2-d+e;
     int g=365.25*b;
     int h=30.6001*(c+1);
     int i=f+g+h+dia+5;
     j=i % 7;

    //Definindo o dia da semana
    if (j==0)
        printf("O dia da semana é Sabádo!");
    else
        if (j==1)
            printf("O dia da semana é Domingo!");
        else
            if (j==2)
                printf("O dia da semana é Segunda!");
            else
                if (j==3)
                    printf("O dia da semana é Terça!");
                else
                    if (j==4)
                        printf("O dia da semana é Quarta!");
                    else
                        if (j==5)
                            printf("O dia da semana é Quinta!");
                        else
                            if (j==6)
                                printf("O dia da semana é Sexta!");
                            else
                                printf("Por favor tente novamente.");
            
   return 0;
} 