#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){   // i + j = n + 1 (Check for each row)
            cout<<"* ";
        }
    cout<<endl;
    } 
}

// METHOD 2
    // for(int i=n; i>=1; i--){
    //     for(int j=1; j<=i; j++){   // i + j = n + 1 (Check for each row)
    //         cout<<"* ";
    //     }