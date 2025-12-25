#include <iostream>
using namespace std;


//static variable
void func(){
    static int x = 0;
    cout<<"x: "<<x<<endl;
    x++;
}

class A {
    public:
    int x;

    void intX(){
        x = x + 1;
    }
};

class ABC {
    public:
    ABC(){
        cout<<"Constructor"<<endl;
    }
    ~ABC(){
        cout<<"Destructor"<<endl;
    }
};

int main(){
    // func();
    // func();
    // func();
    
    // A obj1;
    // A obj2;

    // obj1.x = 100;
    // obj2.x = 200;

    // cout<<obj1.x<<endl;
    // obj1.intX();
    // cout<<obj1.x<<endl;
    // cout<<obj2.x<<endl;
    // obj2.intX();
    // cout<<obj2.x<<endl;
    

    if (true){
        static ABC obj;
    }
    cout<<"End of function"<<endl;
    return 0;
}