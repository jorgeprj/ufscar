#include <iostream>
using namespace std;

void vectorSort(int vector[],int size,int count){ //Sort by selection
    int i, j, min, aux;
    int last = size-1;
    count = 0;
    
    for(i=0;i<last ; i++){
        min=i;
        for(j=(i+1);j<size;j++) {
            if(vector[j]<vector[min])
                min=j;
        }
        if(vector[i]!=vector[min]){
        aux=vector[i];
        vector[i]=vector[min];
        vector[min]=aux;
        }
    }
}
    
void display(int vector[],int size){
    int i;
    for(i=0;i<size;i++)
        cout<<vector[i]<<"-";
    
}

int main(){
    int size=10;
    int count;
    int vet[10]={100,99,77,66,88,11,22,44,33,55};
    display(vet,size);
    cout<<endl;
    vectorSort(vet,size,count);
    cout<<count<<endl;
    cout<<endl;
    display(vet,size);

    return 0;
}