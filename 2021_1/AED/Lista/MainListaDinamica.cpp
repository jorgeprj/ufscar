#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "ListaDinamica.h"
using namespace std;
 
void clear(ListaDinamica &l){
    dat x;
    bool ok, check;
    cout<<"Limpando a lista..."<<endl;
    
    while(!l.isEmpty()){
        l.getHead(x, check);
        l.remove(x, ok);
    }
    
    cout<<"A lista foi limpa"<<endl;
}

void display(ListaDinamica &l){
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
 
int main(){
    ListaDinamica list;
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
    
    display(list);
    clear(list);
    display(list);
    return 0;
}