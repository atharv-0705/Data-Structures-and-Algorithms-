#include<iostream>
using namespace std;

void fun(int x){
    cout<<"XD"<<endl;
}

void fun(char x){
    cout<<":3"<<endl;
}

void fun(double x){
    cout<<":)"<<endl;
}
int main(){
    fun(7);   
    fun('A');
    fun(7.0);
}