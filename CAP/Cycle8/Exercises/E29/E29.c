float l,A;

//area
float area(float l){
    A=(3*(pow(l,2))*(sqrt(3)))/2;
    return(A);
}

float l,p;

//perimetro
float perimetro(float l){
    p=6*l;
    return(p);
}

float lado,per,ar;
int main(){
    printf("Digite o lado do hexágono:");
    scanf("%f",&lado);

    per=perimetro(lado);
    ar=area(lado);

    printf("O perimetro é: %.2f \nA área é: %.2f",per,ar);
    return 0;
}
