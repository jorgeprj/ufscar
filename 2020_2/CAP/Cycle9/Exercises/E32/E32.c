int main(void){
    
    struct ficha_de_disciplina{
        char nome[50];
        char departamento[30];
        int creditos;
    };
    
    struct ficha_de_disciplina disciplina;
    
    printf("\n---------- Cadastro de disciplina -----------\n\n\n");
    
    printf("Nome da disciplina: ");
    fgets(disciplina.nome, 40, stdin);
    
    printf("Informe o Departamento: ");
    fgets(disciplina.departamento, 40, stdin);
    
    printf("Informe a quantidade de créditos: ");
    scanf("%d", &disciplina.creditos);
    
    printf("\n\n --------- Lendo os dados da struct ---------\n\n");
    printf("Nome da disciplina: %s", disciplina.nome);
    printf("Departamento: %s", disciplina.departamento);
    printf("Creditos: %.2d\n" , disciplina.creditos);
    return(0);
}
