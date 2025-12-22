#include <iostream>
#include <string>
using namespace std;

int main(){
    // int n=3,m=3;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         cout<<j<<" ";
            
    //     }
    //     cout<<endl;
    // }

    // int n=3,m=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         cout<<j<<" ";
            
    //     }
    //     cout<<endl;
    //     m = m+1;
    // }

    // int n=3,m=3;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         cout<<j<<" ";
            
    //     }
    //     cout<<endl;
    //     m = m-1;
    // }

    // int n = 9, m = 3;
    // char ch = 65;
    // for (int i=1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }



    // int n = 3;
    // for (int i=0; i<n; i++){
    //     for(int j=0 ; j<i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<n-i; j++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }


    
    // int n = 4;
    // for(int i=0; i<n; i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<j+1;
    //     }
    //     for(int k=0;k<i;k++){
    //         cout<<i-k;
    //     }
    //     cout<<endl;
    // }


    int n=4;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"*";


        if (i!=0){
            for(int j=0; j<2*i-1; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        cout<<"*";


        if(i!= n-2){
            for(int j=0; j<2*(n-2-i)-1; j++){
                cout<<" ";
            }

            cout<<"*";
        }
        
        cout<<endl;
    }


    return 0;
}