int i,n,primo,resultado;

//Verificando se é primo
int prim(int n1){
    for (i=2;i<=n1/2;i++)
        if (n1%i==0)
            primo++;

    return(primo);
}

//Principal
int main(void){
    printf("Digite um valor:");
    scanf("%d", &n);
    prim(n);

    if (primo==0)
        printf("%d é um número primo\n",n);
    else
        printf("%d não é um número primo\n",n);
    return 0;
}