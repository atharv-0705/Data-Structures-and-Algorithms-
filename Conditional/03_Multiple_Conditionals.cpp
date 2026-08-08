// Take 3 postive integer and tell least of them

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 positive integers: ";
    cin>>a>>b>>c;
    if(a<b && a<c){
        cout<<"The least number is : "<<a<<endl;}
    else if(b,a && b<c){
        cout<<"The least number is : "<<b<<endl;}
    else{
        cout<<"The least number is : "<<c<<endl;
    }
    return 0;
}