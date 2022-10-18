#include <iostream>
using namespace std;
typedef int dat;

class DynamicStack{
    public:
        DynamicStack();
        bool isFull();
        bool isEmpty();
        void push(dat x, bool &work);
        void pop(dat &x, bool &work);
    private:
        struct StackNode;
        typedef StackNode (*StackPointer);
        struct StackNode{
            dat entry;
            StackPointer nextNode;
        };
        StackPointer top;
};


DynamicStack::DynamicStack(){
    top=NULL;
}

bool DynamicStack::isFull(){
    return false;
}

bool DynamicStack::isEmpty(){
    return top==NULL;
}

void DynamicStack::push(dat x, bool &work){
    StackPointer p;
    p=new StackNode;
    
    if(p==NULL){
        work=false;
    }
    work=true;
    p->entry=x;
    p->nextNode=top;
    top=p;
}

void DynamicStack::pop(dat &x, bool &work){
    StackPointer aux;
    if(isEmpty()){
        work=false;
    }
    
    work=true;
    x=top->entry;
    aux=top;
    top=top->nextNode;
    delete aux;
}