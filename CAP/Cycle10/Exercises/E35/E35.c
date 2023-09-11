int main(void){
    int i;
    unsigned int vet[10];

    for (i=0;i<=9;i++){
        scanf("%d",&vet[i]);
    }

    for (i=9;i>=0;i--){
        printf("%d ",vet[i]);
    }

    printf("\n");
    return(0);
}