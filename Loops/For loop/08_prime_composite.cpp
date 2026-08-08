// WAP to check if a given no. is Prime or composite
// i = 2 to n-1 loop -> if(n%i != 0) -> Prime no.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag = false; // false means Prime
    for(int i=2; i<=n-1; i++){  // factor mil gaya except 1 and itself
        if(n%i==0){
            flag = true;
            break;
        }
    }
    if(flag==true) cout<<"Composite number";
    else 
cout<<"Prime Number";
}