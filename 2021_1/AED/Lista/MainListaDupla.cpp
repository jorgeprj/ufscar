#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "ListaDinamicaDupla.h"
using namespace std;
 
void display(ListaDupla &l){
    dat x;
    bool ok=1, check;
    cout<<"Mostrando a lista..."<<endl;
    
    if(l.isEmpty()){
        cout<<"A lista esta vazia"<<endl;
    }
    else{
        while(ok==1){
            l.getNext(x,check);
            if(x!=0){
            cout<<x<<" ";
            }
            if(check==0){
                ok=0;
            }
            }
        }
    
    cout<<endl;
}
 
void size(ListaDupla l, int &x){
    bool ok=1, check;
    ListaDupla aux;
    int contador=0;
    cout<<"Calculando o tamamnho da lista..."<<endl;
    
    if(l.isEmpty()){
        cout<<"A lista esta vazia!"<<endl;
        abort();
    }
    else{
        while(ok==1){
            l.getNext(x,check);
            if(x!=0){
                contador++;
            }
            if(check==0){
                ok=0;
            }
        }
    }
    
    x=contador;
}

void copy(ListaDupla l, ListaDupla &l2){
    bool ok=1, check;
    dat value;
    
    if(!l2.isEmpty()){
        cout<<"A lista destino nao esta vazia!"<<endl;
        abort();
    }
    cout<<"Copiando a lista..."<<endl;
    
    if(l.isEmpty()){
        cout<<"A lista esta vazia!"<<endl;
        abort();
    }
    else{
        l.getHead(value,check);
        l2.insert(value,ok);
        while(ok==1){
            l.getNext(value,check);
            if(value!=0){
                l2.insert(value,ok);
            }
            if(check==0){
                ok=0;
            }
        }
    }
}
 
int main(){
    ListaDupla list, list2;
    bool ok,check;
    int value;
    dat top;
 
    list.insert(11,ok);
    list.insert(22,ok);
    list.insert(33,ok);
    list.remove(22,ok);
    
    if(list.isInserted(11)){
        cout<<"11 esta inserido na lista"<<endl;
    }
    else{
        cout<<"11 nao esta inserido na lista"<<endl;
    }
        if(list.isInserted(22)){
        cout<<"22 esta inserido na lista"<<endl;
    }
    else{
        cout<<"22 nao esta inserido na lista"<<endl;
    }
    
    list.insert(44,ok);
    list.insert(55,ok);
    list.insert(66,ok);
    size(list,value);
    cout<<"O tamanho da lista eh: "<<value<<endl;
    copy(list,list2);
    display(list);
    display(list2);
    return 0;
}