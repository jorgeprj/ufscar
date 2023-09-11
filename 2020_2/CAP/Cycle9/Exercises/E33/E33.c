#include <stdio.h>

int main(void){

    struct car_pessoais{
        char nome[50];
        float peso;
        float altura;
    };
    
    struct doc{
        int cpf;
        int titulo_eleitor;
        int rg;
    };
    
    struct dados_pessoa{
        struct doc documentos;
        struct car_pessoais dados_fisicos;
    };

    struct dados_pessoa pessoa;
    
    printf("\n---------- Cadastro da pessoa -----------\n\n\n");
    
    printf("Nome: ");
    fflush(stdin);
    fgets(pessoa.dados_fisicos.nome, 40, stdin);
    
    printf("Digite seu peso:");
    scanf("%f", &pessoa.dados_fisicos.peso);

    printf("Digite sua altura:");
    scanf("%f", &pessoa.dados_fisicos.altura);
    
    printf("Digite seu CPF:");
    scanf("%d", &pessoa.documentos.cpf);
    
    printf("Digite seu título de eleitor:");
    scanf("%d", &pessoa.documentos.titulo_eleitor);
    
    printf("Digite seu RG:");
    scanf("%d", &pessoa.documentos.rg);
    
    
    printf("\n\n --------- Lendo os dados da struct ---------\n\n");
    printf("Nome: %s", pessoa.dados_fisicos.nome);
    printf("Peso: %f\n", pessoa.dados_fisicos.peso);
    printf("Altura: %f\n", pessoa.dados_fisicos.altura);
    printf("CPF: %d\n", pessoa.documentos.cpf);
    printf("Titulo de eleitor: %d\n", pessoa.documentos.titulo_eleitor);
    printf("RG: %d", pessoa.documentos.rg);
    return(0);
}