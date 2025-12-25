#include<iostream>
#include<string>
using namespace std;
//sum & product of all numbers in an array
void sumANDproductsArr(int arr[], int size){
    int sum;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    
    cout<<"Total Products: "<<size<<endl;
    cout<<"Sum Of All Products Price: "<<sum<<endl;
    
}


//swap max and min numbers of an array
int swapMaxMinArr(int arr[],int size){
    int max = INT_MIN;
    int min = INT_MAX;
    int minIndex, maxIndex;
    for(int i=0; i<size; i++){
        if(max<arr[i]){
            max = arr[i];
            maxIndex = i;
        }
        if(min>arr[i]){
            min = arr[i];
            minIndex = i;
        }
    }

    swap(arr[maxIndex],arr[minIndex]);

    return 0;
}



int main(){
    int prices[]={10, 45, 34, 100, 34};
    int size = sizeof(prices)/sizeof(int);
    
    //sum & product of all numbers in an array
    sumANDproductsArr(prices, size);
    
    //swap max and min numbers of an array
    swapMaxMinArr(prices,size);
    for(int i=0; i<size; i++){
        cout<<prices[i]<<endl;
    }


    return 0;
}