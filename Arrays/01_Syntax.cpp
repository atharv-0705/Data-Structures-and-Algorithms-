#include<iostream>
using namespace std;
int main(){
    int marks[] = {74,96,91,57,62,35};
    cout<<"Size of Array: "<<sizeof(marks)<<endl;
    cout<<"Size of Each Element: "<<sizeof(marks[0])<<endl;
     cout<<"Size/No.of elements of Array: "<<sizeof(marks)/sizeof(marks[0])<<endl;
    int govind = marks[0];
    cout << govind << endl;
    int rahul = marks[1];
    cout << rahul << endl;
    int arjun = marks[2];
    cout << arjun << endl;
    int priya = marks[3];
    cout << priya << endl;
    int rohit = marks[4];
    cout << rohit << endl;
    int sid = marks[5];
    cout << sid << endl;
}