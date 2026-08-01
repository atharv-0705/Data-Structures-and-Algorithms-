#include<iostream>
using namespace std;
int main(){
    int marks[] = {74,96,91,57,62,35};
    int n = sizeof(marks)/sizeof(marks[0]);
    for(int i=0;i<n;i++){
        cout << marks[i] << endl;
    }
    
}