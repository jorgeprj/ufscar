#include <iostream>
using namespace std;

int binSearch(int vector[], int size, int value, int &count){
    int start=0;
    int end=size-1;
    int half;
    count=0;
    while (start<=end){
        count++;
        half=(start+end)/2;
        if (value==vector[half])
            return half;
        else 
            if (value<vector[half])
                end=half-1;
            else
                start=half+1;
    }   

    return -1; // not found
}