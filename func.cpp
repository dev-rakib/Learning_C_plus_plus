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

// class nCr {
//     private:
//     int x, y;
//     long long fact(int a){
//         long long fact = 1;
//         for(int i=1;i<=a;i++){
//             fact = fact*i;
//         }
//         return fact;
//     }

//     void nCrCalc(int n,int r){
//         long ncr;
//         ncr = fact(n)/(fact(r)*fact(n-r));
//         cout << ncr <<endl;
//     }
//     public:
//     nCr(int a, int b){
//         this->x = a;
//         this->y = b;
//     }
    
//     void print(){
//         nCrCalc(x,y);
//     }
    
// };

// void PrimeOrNot(int x){
//     bool isPrime = true;
//     for(int i=2;i*i<=x;i++){
//         int remainder = x%i;
//         if(remainder == 0){
//             isPrime = false;
//             break;
//         }
        
//     }
//     if(isPrime == true){
//         cout<<x<<" is Prime"<<endl;
//     } else {
//         cout<<x<<" is not Prime"<<endl;
//     }

// }

// void PrimeNumbers(int n){
//     for(int i=2; i<=n; i++){
//         bool isPrime = true;
//         for(int j=2; j< i; j++){
//             if(i%j==0){
//                 isPrime = false;
//                 break;
//             }
            
//         }
//         if(isPrime){
//             cout<<i<<endl;
//         }
//     }

// }
int main(){ 
    // int a = 12345;
    // sumOfDigits(a);
    // nCr n1(3,2);
    // n1.print();
    // PrimeOrNot(2);
    // PrimeNumbers(20);


    return 0;
}
