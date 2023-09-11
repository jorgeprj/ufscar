float n1,n2,compar;

//Comparação 
float comparação(float n1,float n2){
    if (n1<n2)
        compar=0;
    if (n2<n1)
        compar=1;

    return compar;
}

//Principal
int main(void){
    float numero1,numero2;

    printf("Digite o primeiro número:");
    scanf("%f",&numero1);
    printf("Digite o segundo número:");
    scanf("%f",&numero2);
    comparação(numero1,numero2); 

    if (compar==0)
        printf("%.2f",numero1);
    if (compar==1)
        printf("%.2f",numero2);

    return 0;
}