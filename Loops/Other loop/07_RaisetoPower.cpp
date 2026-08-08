// 'a' raise to the power 'b' (a>0, b>=0)

#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a base: ";
    cin>>a;
    int b;
    cout<<"Enter exponent: ";
    cin>>b;

    int ans = 1;
    for (int i = 1; i <= b; i++) {
        if(a==1) break;
        ans *= a;
    }
    cout << ans;
}