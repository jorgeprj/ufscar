char sexo;
float homem,mulher,altura;

int main(){
    //Dados do usuário
    printf("Digite seu sexo (H-Homem e F-Mulher):");
    scanf("%c",&sexo); 
    printf("Digite a sua altura (em metros):");
    scanf("%f",&altura);
    
    
    //Cálculos 
    homem=(72.7*altura)-58;
    mulher=(62.1*altura)-44.7;
    //Mostrando o peso ideal 
    if (sexo=='h'||sexo=='H')
        printf("Seu peso ideal é %.2f",homem);
    else 
        if (sexo=='f'||sexo=='F')
            printf("Seu peso ideal é %.2f",mulher);
        else 
            printf("Erro");

   return(0);
} 


int sexo;
float homem,mulher,altura;

int main2(){
    //Dados do usuário
    printf("Digite a sua altura (em metros):");
    scanf("%f",&altura);
    printf("Digite seu sexo (0-Homem e 1-Mulher):");
    scanf("%d",&sexo);
    
    //Cálculos 
    homem=(72.7*altura)-58;
    mulher=(62.1*altura)-44.7;
    
    //Mostrando o peso ideal
    switch(sexo){
    case 0 :
        printf ("Seu peso ideal é %.2f",homem);
    break;
    
    case 1 :
        printf ("Seu peso ideal é %.2f kg",mulher);
    break;
    }

   return 0;
} 