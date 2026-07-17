// WAP to Reverse of  a number

// n = 2973   -> rev =3792 
// i*10 -> i+(n%10)
// 0 -> 3 -> 30 -> 37 -> 370 -> 379 -> 3790 -> 3792

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rev = 0;
    while (n != 0){
        rev *= 10;
        rev += (n%10);
        n /= 10;
    }
    cout<<rev;
}

