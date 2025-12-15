#include <iostream>
#include <string>
using namespace std;

class Parent{
    private:
    string name;
    public:
    int age;
    protected:
    double amount;
};

class Child : public Parent {
    public:
    void show(){
        // name = "Rakib"; //cannot use
        age = 20; // can use parent's public
        amount = 20000; // can use parent's protected
    }
};

//abstraction
class Shape { //abstract class
    virtual void draw() = 0; //pure virtual function
};

class Circle : public Shape {
    public:
    void draw(){
        cout<<"This is a Circle";
    }
};


int main(){

    Circle c1;

    c1.draw();

    return 0;
}