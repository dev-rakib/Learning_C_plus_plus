#include <iostream>
#include <string>
using namespace std;

//multiple & Hierarchial inheritence

class Person {
    public:
    string name;
};


class Student : virtual public Person{
    public:
    int rollno;
};

class Teacher : virtual public Person{
    public: 
    string subject;
};

class TA : public Student, public Teacher{

};

class GradStudent : public Student {
    public:
    string c;
};

int main(){

    TA t1;
    t1.name = "Rakib CHowdhury";
    t1.subject = "CSE";

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;

    return 0;
}