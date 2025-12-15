#include <iostream>
#include <string>
using namespace std;


class Student {
    private:
    string grade, name;
    int roll;
    float bangla, english, math;
    float average;

    protected:
    void CalcGrade(){

        CalcAvg();
        if(average >=80){
            grade = "A+";
        }
        else if(average >=70){
            grade = "A-";
        }
        else if(average >=60){
            grade = "A";
        }
        else if(average >=50){
            grade = "B";
        }
        else if(average >=40){
            grade = "C";
        }
        else if(average >=33){
            grade = "Pass";
        }
        else{
            grade = "Fail";
        }
    }
    
    public:

    Student(string n, int r, float b, float e, float m){
        this->name = n;
        this->roll = r;
        this->bangla = b;
        this->english = e;
        this->math = m;
    }
    
    void CalcAvg(){
        average = (bangla+english+math)/3;
    }
    

    void showResult(){

        
        CalcGrade();

        cout<<"Students Name: "<<name<<endl;
        cout<<"Students Roll: "<<roll<<endl;
        cout<<"Students Grade marks is: "<<average<<endl;
        cout<<"Students Grade: "<<grade<<endl;
    }

};
int main(){
    Student s1("Rakib Chowdhury",115168,50,60,90);
    s1.showResult();
    return 0;
}