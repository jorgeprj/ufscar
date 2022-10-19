#include <iostream>
using namespace std;
 
typedef int dat;
 
class DoubleList{
    public:
    DoubleList();
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
            ListPointer prevNode;
        };
        ListPointer head, sentinel;
        int count;
};
    
    DoubleList::DoubleList(){
        sentinel = new ListNode;
        head = sentinel;
        count=0;
    }
    
    bool DoubleList::isFull(){
        return false;
    }
    
    bool DoubleList::isEmpty(){
        return(head==sentinel);
    }
    
    bool DoubleList::isInserted(dat x){
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
    
    void DoubleList::insert(dat x, bool &work){
        ListPointer p, q, back; 
 
        if(isInserted(x)){
            cout<<"The element is already inserted."<<endl;
            work=false;
            abort();
        }
 
        sentinel->entry=x;
        p=head;
        while(p->entry<x)
        {
            back=p;
            p=p->nextNode;
        }
 
        q=new ListNode;
        if(q==NULL){
            cout<<"Insufficient memory!"<<endl;
            work=false;
            abort();
        }
        if(p==sentinel){
            q->nextNode=p->nextNode;
            p->nextNode=q;
            q->prevNode=p;
            sentinel=q;
        }
        else{
            *q=*p;
            back->nextNode=p;
            p->prevNode=back;
            p->entry=x;
            p->nextNode=q;
            q->prevNode=p;
        }
        count++;
        work=true;
        cout<<x<<" has been inserted!"<<endl;
    }
    
    void DoubleList::remove(dat x, bool &work){
        ListPointer p, q, aux;
        p=NULL;
        q=head;
        
        if(isEmpty()){
            cout<<"The list is empty!"<<endl;
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
            aux=q->nextNode;
            aux->prevNode=q->prevNode;
            p->nextNode=aux;
        }
        
        delete q;
        count--;
        cout<<x<<" has been removed!"<<endl;
    }
        
    void DoubleList::getHead(dat &x, bool &check){
        ListPointer q;
        q=head;
 
        if(isEmpty()){
            cout<<"The list is empty!"<<endl;
            check=false;
        }
        x=q->entry;
        check=true;
    }
    
    void DoubleList::getNext(dat &x, bool &check){
        ListPointer q, p;
        q=head;
        
        if(isEmpty()){
            check=false;
            cout<<"The list is empty!"<<endl;
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