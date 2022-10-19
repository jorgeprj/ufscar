#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "DoubleList.h"
using namespace std;
 
void display(DoubleList &l){
    dat x;
    bool ok=1, check;
    cout<<"Showing the list..."<<endl;
    
    if(l.isEmpty()){
        cout<<"The list is empty!"<<endl;
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
 
void size(DoubleList l, int &x){
    bool ok=1, check;
    DoubleList aux;
    int count=0;
    cout<<"Calculating list size..."<<endl;
    
    if(l.isEmpty()){
        cout<<"The list is empty!"<<endl;
        abort();
    }
    else{
        while(ok==1){
            l.getNext(x,check);
            if(x!=0){
                count++;
            }
            if(check==0){
                ok=0;
            }
        }
    }
    
    x=count;
}

void copy(DoubleList l, DoubleList &l2){
    bool ok=1, check;
    dat value;
    
    if(!l2.isEmpty()){
        cout<<"Destination list is not empty!"<<endl;
        abort();
    }
    cout<<"Copying the list..."<<endl;
    
    if(l.isEmpty()){
        cout<<"The list is empty!"<<endl;
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
    DoubleList list, list2;
    bool ok,check;
    int value;
    dat top;
 
    list.insert(11,ok);
    list.insert(22,ok);
    list.insert(33,ok);
    list.remove(22,ok);
    
    if(list.isInserted(11)){
        cout<<"11 is included in the list"<<endl;
    }
    else{
        cout<<"11 isn't included in the list"<<endl;
    }
        if(list.isInserted(22)){
        cout<<"22 is included in the list"<<endl;
    }
    else{
        cout<<"22 isn't included in the list"<<endl;
    }
    
    list.insert(44,ok);
    list.insert(55,ok);
    list.insert(66,ok);
    size(list,value);
    cout<<"The list size is: "<<value<<endl;
    copy(list,list2);
    display(list);
    display(list2);
    return 0;
}