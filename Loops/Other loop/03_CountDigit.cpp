// WAP to count digits of a number
// num =1243 -> 4
// mum= 455456 -> 6

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count = 0;
    if(n == 0) count++;
    while(n  != 0){
        n /= 10;
        count++;
    }
    cout<<"Total digit of that number: "<<count;

    
}