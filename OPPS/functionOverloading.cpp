#include<iostream>
using namespace std;
class Loading{ 
public:
void sum(int a,int b){
    cout<<a+b<<endl;
}
void sum(int a,int b,int c){
    cout<<a+b+c<<endl;
}
void sum(string a,string b){
    cout<<a+b<<endl;
}

};

int main(){
   Loading a;
   a.sum(5,8);
   a.sum(2,9,32);
   a.sum("ATHARV ","GUPTA") ;
}