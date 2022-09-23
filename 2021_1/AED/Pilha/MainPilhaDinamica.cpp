#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "PilhaDinamica.h"
using namespace std;
 
void getTop(PilhaDinamica s, dat &x){
    bool ok;
    if(s.isEmpty()){
        cout<<"A pilha esta vazia!"<<endl;
        abort();
    }
    s.pop(x, ok);
    s.push(x, ok);
}

void clear(PilhaDinamica &s){
    int x;
    bool ok;
    while(!s.isEmpty()){
        s.pop(x,ok);
    }
}
 
int main(){
    PilhaDinamica stack;
    bool ok;
    int value;
    dat top;
 
    stack.push(11, ok);
    cout<<ok<<endl;
    stack.push(22, ok);
    cout<<ok<<endl;
    stack.push(7, ok);
    cout<<ok<<endl;
    stack.push(9, ok);
    cout<<ok<<endl;
    stack.pop(value, ok);
    cout<<ok<<endl;
    cout<<value<<endl;
    stack.pop(value, ok);
    cout<<ok<<endl;
    cout<<value<<endl;
    stack.pop(value, ok);
    cout<<ok<<endl;
    cout<<value<<endl;
    stack.pop(value, ok);
    cout<<ok<<endl;
    cout<<value<<endl;
 
    stack.push(19,ok);
    stack.push(18,ok);
    getTop(stack,top);
    cout<<"Top:"<<top<<endl;
 
    clear(stack);
    getTop(stack,top);
    cout<<"Top:"<<top<<endl;
 
    return 0;
}