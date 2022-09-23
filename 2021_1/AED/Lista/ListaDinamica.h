#include <iostream>
using namespace std;
 
typedef int dat;
 
class ListaDinamica{
    public:
    ListaDinamica();
        bool isFull();
        bool isEmpty();
        bool isInserted(dat x);
        void insert(dat x, bool &work);
        void remove(dat x, bool &work);
        void getHead(dat &x, bool &check);
        void getNext(dat &x, bool &check);
    private:
        struct ListNode;
        typedef ListNode (*ListPointer);
        struct ListNode{
            dat entry;
            ListPointer nextNode;
        };
        ListPointer head, sentinel;
        int count;
    };
 
    ListaDinamica::ListaDinamica(){
        sentinel = new ListNode;
        head = sentinel;
        count=0;
    }
    
    bool ListaDinamica::isFull(){
        return false;
    }
    
    bool ListaDinamica::isEmpty(){
        return(head==sentinel);
    }
    
    bool ListaDinamica::isInserted(dat x){
        ListPointer q;
        q=head;
 
        sentinel->entry=x;
        while(q->entry<x){
            q=q->nextNode;
        }
 
        if(q->entry!=x||q==sentinel)
            return false;
        else
            return true;
 
    }
    
    void ListaDinamica::insert(dat x, bool &work){
        ListPointer p, q; 
 
        if(isInserted(x)){
            cout<<"O elemento ja esta inserido."<<endl;
            work=false;
            abort();
        }
        sentinel->entry=x;
        p=head;
        while(p->entry<x)
            p=p->nextNode;
 
        q=new ListNode;
        
        if(q==NULL){
            cout<<"Memoria insuficiente"<<endl;
            work=false;
            abort();
        }
        
        if(p==sentinel){
            p->nextNode=q;
            sentinel=q;
        }
        else{
            *q=*p;
            p->entry=x;
            p->nextNode=q;
        }
        
        count++;
        work=true;
        cout<<x<<" foi inserido!"<<endl;
    }
    
    void ListaDinamica::remove(dat x, bool &work){
        ListPointer p, q;
        p=NULL;
        q=head;
        if(isEmpty()){
            cout<<"A lista esta vazia"<<endl;
            work=false;
            abort();
        }
        sentinel->entry=x;
        while(q->entry<x){
            p=q;
            q=q->nextNode;
        }
        
        if(q->entry!=x||q==sentinel){
            work=false;
            abort();
        }
        
        if(q==head){
            head=q->nextNode;
        }
        else{
            p->nextNode=q->nextNode;
        }
        
        delete q;
        count--;
        cout<<x<<" foi removido!"<<endl;
    }
    
    void ListaDinamica::getHead(dat &x, bool &check){
        ListPointer q;
        q=head;
 
        if(isEmpty()){
            cout<<"A lista esta vazia"<<endl;
            check=false;
        }
        
        x=q->entry;
        check=true;
    }
    
    void ListaDinamica::getNext(dat &x, bool &check){
        ListPointer q, p;
        q=head;
        
        if(isEmpty()){
            check=false;
            cout<<"A lista esta vazia"<<endl;
        }
 
        if(check==false){
            x=q->entry;
            check=true;
        }
        else{
            sentinel->entry=x;
            while(q->entry<x){
                q=q->nextNode;
            }
            q=q->nextNode;
            if(q==sentinel||q==NULL){
                check=false;
                x=0;          
            }
            else{
            x=q->entry;
            check=true;          
            }
        }
    }