#include <iostream>
#include <string>
using namespace std;

class Account {

    public:
    string HolderName;
    string Branch;
    string AccType;
    int AccNumber;
    int Deposit;
    int Withdraw;

    
    
    
    Account(string hn, string br, string at, int an, int b, int dep){

        this->HolderName = hn;
        this->Branch = br;
        this->AccType = at;
        this->AccNumber = an;
        this->Deposit = dep;
        this->Balance = b;
        Balance = Balance + Deposit;

    }
    
    
    void Dep(){
        cout<<"Enter The Deposit Amount:"<<endl;
        cin>>Deposit;

        if(Deposit>0){
            Balance = Balance + Deposit;
    
            cout<<"Your Current Balance is: "<<Balance<<endl;
            
        }
        else {
            cout<<"Please Enter a Valid Number."<<endl;
        }
        
    }

    void With(){
        cout<<"Enter withdraw Amount:"<<endl;
        cin>>Withdraw;

        if(Withdraw>0){
            Balance = Balance - Withdraw;
            
            cout<<"Your Current Balance is: "<<Balance<<endl;

        }
        else {
            cout<<"Please Enter a Valid Number."<<endl;
        }
        
    }
    
    void AccDetails(){
        cout<<"Account Details of "<<HolderName<<endl;
        cout<<"Name: "<<HolderName<<endl;
        cout<<"Account Number: "<<AccNumber<<endl;
        cout<<"Branch: "<<Branch<<endl;
        cout<<"Account Type: "<<AccType<<endl;
        cout<<"Balance: "<<Balance<<endl;
    }
    void Bal(){
        cout<<"Your Account Balance is: "<<Balance<<endl;
    }

    
    private:
    
    
    int Balance;
    
    





};

int main(){

    Account a1("Rakib Chowdhury","Chandgaon", "Credit", 2014710049, 10000, 20000);


    a1.AccDetails();
    a1.Dep();
    a1.With();
    a1.Bal();


    return 0;
}