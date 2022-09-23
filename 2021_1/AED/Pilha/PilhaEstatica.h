#include <iostream>
#define TAM 3
using namespace std;

typedef int dat;

class PilhaEstatica{
    public:
    PilhaEstatica();
        bool full();
        bool empty();
        void push(dat x, bool &work);
        void pop(dat &x, bool &work);
    private:
    int top;
    dat entry[TAM];
};

    PilhaEstatica::PilhaEstatica(){
        top=-1;
    }

    bool PilhaEstatica::full(){
        return (top==(TAM-1));
    }

    bool PilhaEstatica::empty(){
        return (top==-1);
    }

    void PilhaEstatica::push(dat x, bool &work){
        if(full())
            work=false;
        else{
            work=true;
            top++;
            entry[top]=x;
        }
    }

    void PilhaEstatica::pop(dat &x, bool &work){
        if(empty())
            work=false;
        else{
            work=true;
            x=entry[top];
            top--;
        }
    }