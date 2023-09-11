int x,n,pot;

int potencia(int x, int n){
    pot=(pow(x,n));
    return pot;
}

int x,n,p;
int main(){
    scanf("%d",&x);
    scanf("%d",&n);

    if (n==0)
        p=1;

    if (n>0)
        p=x*(potencia(x,(n-1)));

    printf("%d",p);
    return 0;
}
