#include<iostream>
using namespace std;

int main(){
    int x = 5, y = 2;
    // int* p1 = &x, p2 = &y;  Syntax Error
    int* p1 = &x;
    int* p2 = &y;
    cout<<p1<<" "<<p2<<endl;
    cout<<*p1<<" "<<*p2<<endl;
}