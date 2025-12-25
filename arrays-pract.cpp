#include<iostream>
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

//print all unique values in an array
// int uniNonuni[] = {1,2,2,3,4,4,5};
void printUniqueArr(int arr[], int size){
    for(int i=0; i<size; i++){
        bool isDuplicate = false;
        for(int j=0; j<i; j++){
            if (arr[i] == arr[j]){
                isDuplicate = true;
                break;
            }
        }
        
        if(!isDuplicate){
            cout<<arr[i]<<" "<<endl;
        }
        
    }
}

//print intersection of two arrays
void intersectionArr(int arr1[], int arr2[], int size){
    for(int i=0; i<size; i++){
        bool intersection = false;
        for(int j=0; j<=i; j++){
            if(arr1[i]==arr2[j]){
                intersection = true;
                break;
            }
        }
        if (intersection){
            cout<<arr1[i]<<endl;
        }
    }
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

    //print all unique values in an array
    int uniNonuni[] = {1,2,2,3,4,4,5};
    int unisize = sizeof(uniNonuni)/sizeof(int);
    printUniqueArr(uniNonuni,unisize);


    //print intersection of two arrays
    int a[]={1,2,3,5,6,7,10};
    int b[]={3,4,5,8,9,10,2,23,45,34};
    if (sizeof(a)>sizeof(b)){
        int bothsize = sizeof(a)/sizeof(int);
        intersectionArr(a,b,bothsize);
    } else {
        int bothsize = sizeof(b)/sizeof(int);
        intersectionArr(a,b,bothsize);
    }


    return 0;
}