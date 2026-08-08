// Take a postive number as input and tell it is divisible by 3 or 5 but not 15

#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a positive integer: ";
    int num;    
    cin>>num;
    if((num%3 == 0 || num%5 == 0) && num%15 != 0){
        cout<<"The number is divisible by 3 or 5 but not 15"<<endl;}
    else if(num%15 == 0){
        cout<<"The number is divisible by 15"<<endl;}
    else{
        cout<<"The number is not divisible by 3 or 5"<<endl;}
    return 0;
}