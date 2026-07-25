#include<iostream>
using namespace std;
void fun(int age = 20){ // Default Parameter
    cout<<"My age is "<<age<<endl;
}
int main(){
    fun(18);
    fun();
}