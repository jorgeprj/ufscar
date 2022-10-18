#include <iostream>
using namespace std;

int linearSearch(int vector[], int size, int value, int &count){
    int i;
    count=0;
    for(i=0;i<size;i++){
        count++;
        if(vector[i]==value){
            return i;
        }
    }
    
    return -1; // nnot found
}