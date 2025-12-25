#include <iostream> 
using namespace std;

void reverseArr(int arr[], int size){
    int e = size-1;
    for(int i=0; i<=e; i++){
        swap(arr[i],arr[e]);
        e--;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
       
}

int main(){
    int num[] = {1,2,3,4,5};
    int size = sizeof(num)/sizeof(int);
    for(int i=0; i<size; i++){
        cout<<num[i]<<endl;
    }
    reverseArr(num,size);
    
    
    
    return 0;
}