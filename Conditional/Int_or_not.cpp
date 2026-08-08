// Take an input of a real number and check if it is an integer or not

#include <iostream>
using namespace std;
int main() {
    float x;
    cout<<"Enter a real number: ";
    cin>>x;
    
    int n = int(x);  // convert to integer
    
    if (x==n) {
        cout<<"It is a Integer";
    }else{
        cout<<"It is  not a Integer";
    }

    return 0;
}