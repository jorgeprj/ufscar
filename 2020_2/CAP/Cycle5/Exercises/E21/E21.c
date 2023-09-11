float peso,altura,imc;

int main(){
    //Dados do usuário
    printf("Digite o seu peso (em kg):");
    scanf("%f",&peso);
    printf("Digite a sua altura (em metros):");
    scanf("%f",&altura);
    
    //Cálculo do IMC 
    imc=peso/(altura*altura);
    printf("\n Seu imc é de %.2f",imc);
    
    //Classificando o IMC 
    if (imc<18.5)
    printf("\n ABAIXO DO PESO!");
    else
        if (imc>=18.5 && 25>imc)
            printf("\n PESO NORMAL!");
        else
            if (30>imc && imc>=25)
                printf("\n ACIMA DO PESO!");
            else
                if (imc>=30)
                    printf("\n OBESO!");
                else
                    printf("\n Por favor tente novamente!");

   return 0;
} 