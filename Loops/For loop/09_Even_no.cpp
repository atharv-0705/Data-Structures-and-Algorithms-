// WAP to print all Even number from 1 to 100

#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count = 0;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            cout<<"Even number from 1 to guven number: "<<i<< " ";
            count++;
        }
    }
    cout<<endl<<"Total Even number: "<<count;
}