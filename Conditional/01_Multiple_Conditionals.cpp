// Take a positive Integer and Tell it is four digit number or not
// && -> Intersection
// || -> Union

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive integer: ";
    cin>>num;
    if(num>999 && num<10000){
        cout <<"The number is a four digit number."<<endl;
    }else{
        cout <<"The number is not a four digit number."<<endl;
    }
    return 0;
}