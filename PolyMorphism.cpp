#include <iostream>
#include <string>
using namespace std;


//polymorphism


//compile-time polymorphism
// class Student {
//     public:
//     string name;
//     string a = "abc";

//     Student(){
//         cout<<"non parameterized"<<endl;
//     }
//     Student(string name){
//         this->name = name;
//         cout<<"parameterized"<<endl;
//     }

//     void show(int x){
//         cout<<x<<endl;
//     }
//     void show(string name){
//         cout<<name<<endl;
//     }
//     void view(){
//         string b = a+"";
//         cout<<b<<endl;
//     }
// };


//run-time polymorphism

//function overrding
class Parent {
    public:
    void getinfo(){
        cout<<"This is parent function"<<endl;
    }
    //virtual function
    virtual void hello(){
        cout<<"Hello"<<endl;
    }
};

class Child : public Parent {
    public:
    void getinfo(){
        cout<<"This is child function which is overriding parent's getinfo function"<<endl;
    }

    //virtual function in child class
    void hello(){
        cout<<"Hello"<<endl;
    }
};


int main(){

    Parent p1;
    // p1.getinfo();
    p1.hello();
    Child c1;
    c1.hello();
    // c1.getinfo();

    // Student s1("Rakib"); //parameterized
    // Student s2; //non-parameterized

    // s1.show("Rakib");
    // s1.show(12);
    // s1.view();
    // return 0;



}