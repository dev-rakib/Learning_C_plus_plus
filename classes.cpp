#include <iostream>

using namespace std;

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretpassword = sp;
    }

    void PrintDetails()
    {

        cout << "The Name of employee is: " << name << " and his salary is: " << salary << "tk" << endl;
    }

    void getsecret()
    {
        cout << "This is the Password: " << secretpassword << endl;
    }

private:
    int secretpassword;
};

class Programmer : public Employee
{
public:
    int errors;
};

int main()
{
    Employee rak("Rakib Constr", 100000, 1234);

    // har.name = "rakib";
    // har.salary = 100;
    rak.PrintDetails();
    rak.getsecret();
}