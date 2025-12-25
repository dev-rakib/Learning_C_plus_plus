#include <iostream>
#include <vector>
using namespace std;


int linearSearch(vector <int>& vec, int target){
    //for loop will return index of the targeted value
    for(int i=0; i<vec.size(); i++){
        if(vec[i]==target){
            return i;
        }
    }

    //This is foreach loop which will return the actual target value
    // for(int val : vec){
    //     if(val == target){
    //         return val;
    //     }
    // }
    return -1;
}

void reverseVector(vector <int>& vec){
    int start = 0;
    int end = vec.size()-1;

    while(start<=end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    for(int val: vec){
        cout<<val<<" ";
    }
    return;
}
int main(){
    vector <int> nums = {1,23,34,2};
    int target = 34;
    cout<<linearSearch(nums,target)<<endl;
    reverseVector(nums);
    
    cout<<endl;
    return 0;
}