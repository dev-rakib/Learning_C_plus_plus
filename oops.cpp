#include <iostream>
#include <string>
using namespace std;

class Teacher {
    private:
    double salary;

    public:
    //properies or attributes
    string name;
    string dep;
    string subject;

    // constructor - non parameterized
    Teacher(){
        dep = "CSE";
    }

    // constructor - parameterized
    Teacher(string n, string d, string s, int sal){
        this->name = n;
        this->dep = d;
        this->subject = s;
        this->salary = sal;
    }

    // constructor - copy constructor (Shallow)
    Teacher(Teacher &obj){ //pass by reference
        cout<<"I am Custom Copy Constructor"<<endl;
        this->name = obj.name;
        this->dep = obj.dep;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dep<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
        
    }


    //methods or member functions
    void changeDep(string newDep){
        dep = newDep;
    }
    //setter
    void setsalary(double s){
        salary = s;
    }
    //getter
    double getSalary(){
        return salary;
    }

};


class Student {
    public:
    string name;
    double* cgpaptr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    //constructor - copy constructor (Deep)
    Student(Student &obj){
        this->name = obj.name;
        cgpaptr =new double;
        *cgpaptr = *cgpaptr;
    }

    void getStudent(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaptr<<endl;
    }

    //desctructor
    ~Student(){
        cout<<"Hi, I delete everything"<<endl;
        delete cgpaptr; //if not used memory leak or memory waste will happen
    }



};

class Person {
    public:
    string name;
    int age;

    // Person(string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }

    // Person(){
    //     cout<<"I an Parent Constructor"<<endl;
    // }
};

//inheritence - single-level 
class Child : public Person {
    public:
    int rollno;

    // Child(string name, int age, int rollno) : Person(name,age){
    //     this->rollno = rollno;
    // }
    // void getinfo(){
    //     cout<<"Name: "<<name<<endl;
    //     cout<<"Age: "<<age<<endl;
    //     cout<<"Roll no: "<<rollno<<endl;
    // }
};

//inheritence - multi-level
class GrandChild : public Child {
    public:
    string researchArea;
};

int main(){
    // string name;
    // int age;
    // int rollno;
    // Child c1("Rakib", 19, 01);

    // c1.name = ;
    // c1.age = 19;
    // c1.rollno = 01;

    // cout<<c1.name<<endl<<c1.age<<endl<<c1.rollno<<endl;

    GrandChild g1;
    g1.name = "gum";
    g1.researchArea = "CSE";
    cout<<g1.name<<endl;
    cout<<g1.researchArea<<endl;

    // Student s1("Rakib Chowdhury", 9.2);
    // Student s2(s1);

    // s1.getStudent();
    // *(s2.cgpaptr) = 3.4;
    // s1.getStudent();
    // s2.getStudent();
    // Teacher t1("Rakib","CSE","C++",2000); //constructor call
    // t1.name = "Rakib";
    // // t1.dep = "CSE";
    // t1.subject = "C++";
    // t1.setsalary(2000);
    // cout<<t1.dep<<endl<<t1.getSalary()<<endl;
    // t1.getInfo();


    // Teacher t2(t1);
    // t2.getInfo();
    return 0;
}
