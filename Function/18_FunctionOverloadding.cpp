#include<iostream>
using namespace std;
void fun(){
    cout<<"Hi"<<endl;
}
void fun(int x){
    cout<<"KuchuPuchu"<<endl;
}
void fun(int x, int y){
    cout<<"Hi KuchuPuchu"<<endl;
}
// This will Give error
// void fun(int x = 7){
//     cout<<"Hello"<<endl;
// }
int main(){
    fun();   
    fun(7);
    fun(1,2);
}