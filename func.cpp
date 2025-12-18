#include <iostream>
#include <string>
using namespace std;

// void sumOfDigits(int x){
//     int sum = 0;
//     if(x%10 != 0){
//         while(x%10 > 0){
//             sum += x%10;
//             x = x/10;
//         }
//         cout<<sum<<endl;
//     } else {
//         cout<< 0<<endl;
//     }
// }

class nCr {
    private:
    int x, y;
    long long fact(int a){
        long long fact = 1;
        for(int i=1;i<=a;i++){
            fact = fact*i;
        }
        return fact;
    }

    void nCrCalc(int n,int r){
        long ncr;
        ncr = fact(n)/(fact(r)*fact(n-r));
        cout << ncr <<endl;
    }
    public:
    nCr(int a, int b){
        this->x = a;
        this->y = b;
    }
    
    void print(){
        nCrCalc(x,y);
    }
    
};

int main(){ 
    // int a = 12345;
    // sumOfDigits(a);
    nCr n1(3,2);
    n1.print();
    return 0;
}
