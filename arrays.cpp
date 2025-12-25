#include <iostream>
using namespace std;

int main(){
    int marks[5]={123,234,534,323};
    marks[4]=349;
    int sz = sizeof(marks);
    int size = sz/sizeof(int);
    // cout<<sz/sizeof(int)<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    //taking input of marks
    // for(int i=0; i<size; i++){
    //     cout<<"Enter marks of student "<<i+1<<":";
    //     cin>>marks[i];
    // }

    //printing marks
    // for(int i=0; i<size; i++){
    //     cout<<"Mark of Student "<<i+1<<" is: "<<marks[i]<<endl;
    // }
    
    //finding smallest value
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int small_index, large_index;
    for(int i=0; i<size; i++){
        //using if-else statement
        if(smallest>marks[i]){
            smallest = marks[i];
            small_index = i;
        }
        if(largest<marks[i]){
            largest = marks[i];
            large_index = i;
        }

        //using function
        // smallest = min(marks[i], smallest);
        // largest = max(marks[i],largest);
    }
    cout<<"largest: "<<small_index<<endl;
    cout<<"smallest: "<<smallest<<endl;
    cout<<"largest: "<<large_index<<endl;
    cout<<"largest: "<<largest<<endl;

    return 0;
}