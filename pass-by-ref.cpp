#include <iostream>
using namespace std;


void changeArr(int arr[], int size){
    for(int i=0; i<size; i++){
        arr[i] = 10 + arr[i];
    }
}


int main(){
    int key[]={312,312,323};
    int bits = sizeof(key);
    int size = bits/sizeof(int);

    changeArr(key,size);
    for(int i=0; i<size; i++){
        cout<<key[i]<<endl;
    }
    return 0;
}