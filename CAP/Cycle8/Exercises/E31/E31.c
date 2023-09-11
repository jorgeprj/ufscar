void DecimalParaRomano(unsigned int numero, char *resultado) 
{
    char *dezenas[]  = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *unidades[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    int   size[] = { 0, 1, 2, 3, 2, 1, 2, 3, 4, 2,};

    strcpy (resultado, dezenas[numero / 10]);   resultado += size[numero / 10];  numero = numero % 10;
    strcpy (resultado, unidades[numero]);       resultado += size[numero];
}

int main(){
    char *numeroromano = malloc(sizeof(char) * 1024);
    int numero;

    puts("Digite um valor a ser convertido(de 1 até 50): ");
    scanf("%d", &numero);

    DecimalParaRomano(numero, numeroromano);
    printf("O número arábico %d equivale %s em romano\n", numero, numeroromano);

    return 0;
}
