#include<iostream>
using namespace std;
void fun(int x, float y){
    cout<<"XD"<<endl;
}

void fun(float y,int x){
    cout<<":3"<<endl;
}

int main(){
    fun(18.0,22);   
    fun(22,18.00);
}