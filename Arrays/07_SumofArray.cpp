#include<iostream>
using namespace std;
int main(){
    int marks[] = {74,96,91,57,62,35};
    int n = sizeof(marks)/sizeof(marks[0]);
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += marks[i];
    }
    cout << "Sum of Array Elements: " << sum << endl;
}