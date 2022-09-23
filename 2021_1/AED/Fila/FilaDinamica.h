#include <iostream>
using namespace std;
 
typedef int dat;
 
class FilaDinamica{
    public:
    FilaDinamica();
        bool isFull();
        bool isEmpty();
        void append(dat x, bool &work);
        void serve(dat &x, bool &work);
    private:
    struct QueueNode;
    typedef QueueNode (*QueuePointer); 
    struct QueueNode{
        dat entry; 
        QueuePointer nextNode; 
    };
    QueuePointer front;
    QueuePointer rear;
};

    FilaDinamica::FilaDinamica(){
        front=NULL;
        rear=NULL;
    }
    
    bool FilaDinamica::isFull(){
        return false; 
    }
    
    bool FilaDinamica::isEmpty(){
        return front==NULL;
    }
    
    void FilaDinamica::append(dat x, bool &work){
        QueuePointer q;
        q=new QueueNode;
        if(q==NULL){ 
            work=false;
        }
        work=true;
        q->entry=x; 
        
        if(isEmpty()){ 
            front=q;
            rear=q;
        }
        else{
            rear->nextNode=q; 
            rear=q; 
        }
        
        q->nextNode=NULL; 
    }
    
    void FilaDinamica::serve(dat &x, bool &work){
        QueuePointer aux;
        
        if(isEmpty()){
            work=false;
        }
        
        work=true;
        x=front->entry; 
        aux=front;
        front=front->nextNode; 
        delete aux;
        
        if(front==NULL){ 
            rear=NULL;
        }   
    }