#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec1;
    vector <int> vec2 = {1,2,3};
    vector <int> vec3(3,0);
    // cout<<vec1[0]<<endl; //THis is wrong
    cout<<vec2[0]<<endl;
    cout<<vec3[0]<<endl;

    // vector loop
    for(int val : vec2){ //foreach loop
        cout<< val << endl;
    }

    
    //vector functions
    vector <char> names = {'a','b','c'};

    names.push_back('d');
    names.push_back('e');
    names.pop_back();


    names.push_back('r');

    cout<<names.size()<<endl;
    cout<<names.capacity()<<endl;
    cout<<names.front()<<endl;
    cout<<names.back()<<endl;
    cout<<names.at(2)<<endl;
    return 0;
}