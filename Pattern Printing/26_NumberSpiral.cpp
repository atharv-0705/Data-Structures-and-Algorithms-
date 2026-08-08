#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){ 
            // Method 1
            cout<<min(i,j)<<" ";
            // Method 2
            // if((i<=j)) cout<<i<<" ";
            // else cout<<j<<" ";
        }
        cout<<endl;
    }
}