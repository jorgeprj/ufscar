#include <iostream>
#define TAM 5
using namespace std;

typedef int dat;

class StaticQueue{
    public:
    StaticQueue();
        bool isFull();
        bool isEmpty();
        void append(dat x, bool &work);
        void serve(dat &x, bool &work);
    private:
        int i;
        int front;
        int rear;
        int count;
        dat entry[TAM];
};

    StaticQueue::StaticQueue(){
        count=0;
        front=-1;
        rear=-1;
    }

    bool StaticQueue::isFull(){
        return(count==(TAM));
    }

    bool StaticQueue::isEmpty(){
        return(count==0);
    }

    void StaticQueue::append(dat x, bool &work){
        if(isFull())
            work=false;
        else{
            work=true;
            count++;
            if(front==-1){
                front++;
            }
            rear++;
            entry[rear]=x;
        }
    }

    void StaticQueue::serve(dat &x, bool &work){
        if(isEmpty())
            work=false;
        else{
            work=true;
            x=entry[front];
            if(front>=rear){
                front = -1;
                rear = -1;
            }
            else{
                for(i=0;i<=count-1;i++){
                    entry[i]=entry[i+1];
                }
            }
        }
        count--;
        rear--;
    }