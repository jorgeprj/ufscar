#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "StaticQueue.h"

using namespace std;

void getSize(StaticQueue q, dat &x){
    bool ok;
    dat value;
    StaticQueue aux;
    int contador=0;
    if(q.isEmpty()){
        cout<<"The stack is empty!"<<endl;
        abort();
    }
    while(!q.isEmpty()){
        q.serve(value,ok);
        aux.append(value,ok);
        contador++;
    }
    while(!aux.isEmpty()){
        aux.serve(value,ok);
        q.append(value,ok);
    }
    x=contador;
}

void getFront(StaticQueue q, dat &x){
    bool ok;
    dat value;
    StaticQueue aux;
    int contador=0;
    if(q.isEmpty()){
        cout<<"The stack is empty!"<<endl;
        abort();
    }
    q.serve(x,ok);
    aux.append(x,ok);
    while(!q.isEmpty()){
        q.serve(value,ok);
        aux.append(value,ok);
    }
    while(!aux.isEmpty()){
        aux.serve(value,ok);
        q.append(value,ok);
    }
}


int main(){
    StaticQueue queue;
    bool ok;
    int value;
    dat front;
    dat rear;
    dat count;

    queue.append(11, ok);
    cout<<ok<<endl;
    queue.append(22, ok);
    cout<<ok<<endl;
    queue.append(33, ok);
    cout<<ok<<endl;
    queue.append(44, ok);
    cout<<ok<<endl;
    queue.append(55, ok);
    cout<<ok<<endl;
    queue.append(66, ok);
    cout<<ok<<endl;
    queue.serve(value,ok);
    cout<<ok<<endl;
    cout<<value<<endl;
    getSize(queue,value);
    cout<<"Size:"<<value<<endl;
    getFront(queue,value);
    cout<<"Front:"<<value<<endl;
    queue.append(66, ok);
    queue.serve(value,ok);
    queue.serve(value,ok);
    queue.serve(value,ok);
    queue.serve(value,ok);
    queue.serve(value,ok);
    cout<<value<<endl;
    getFront(queue,value);
    cout<<"Front:"<<value<<endl;
    
    return 0;
}