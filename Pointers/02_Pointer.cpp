#include<iostream>
using namespace std;

int main(){
    int x = 7;
    int* ptr = &x;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
}