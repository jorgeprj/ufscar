#include <iostream>
#define TAM 3
using namespace std;

typedef int dat;

class StaticStack{
    public:
    StaticStack();
        bool full();
        bool empty();
        void push(dat x, bool &work);
        void pop(dat &x, bool &work);
    private:
    int top;
    dat entry[TAM];
};

    StaticStack::StaticStack(){
        top=-1;
    }

    bool StaticStack::full(){
        return (top==(TAM-1));
    }

    bool StaticStack::empty(){
        return (top==-1);
    }

    void StaticStack::push(dat x, bool &work){
        if(full())
            work=false;
        else{
            work=true;
            top++;
            entry[top]=x;
        }
    }

    void StaticStack::pop(dat &x, bool &work){
        if(empty())
            work=false;
        else{
            work=true;
            x=entry[top];
            top--;
        }
    }