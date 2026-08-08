// Teritary Operator 
// (Condition) ? True : False
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    (n%2 == 0) ? cout << "The number is even" : cout << "The number is odd";
    return 0;
}