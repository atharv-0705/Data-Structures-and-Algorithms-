#include<iostream>
using namespace std;
int main(){
    int* brr = new int[7]; // dynamic allocation
    brr[0] = 4;
    cout<<brr[0]<<endl;
    for(int i=0;i<7;i++){
        cout<<brr[i]<<" ";
    }
}