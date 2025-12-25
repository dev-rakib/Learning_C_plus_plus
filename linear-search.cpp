#include <iostream>
#include <string>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){ //found the value
            return i;
        }
    }
    return -1; //didn't find the value

}
int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int target1 = 8;
    int target2 = 80;
    int size = sizeof(arr)/sizeof(int);
    int index1 = linearSearch(arr,size,target1);
    int index2 = linearSearch(arr,size,target2);
    cout<<"Index of our target "<<target1<<" is: "<<index1<<endl;
    cout<<"Index of our target "<<target2<<" is: "<<index2<<endl;

    return 0;
}