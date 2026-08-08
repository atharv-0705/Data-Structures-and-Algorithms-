#include<iostream>
using namespace std;
class Student{ //Student is a new datatype
public:
    string name;
    int rno;
    float gpa;
};

int main(){
    Student s1;
    s1.name = "ATHARV GUPTA";
    s1.rno = 18;
    s1.gpa = 8.92;

    Student s2;
    s2.name = "hiamnshu";
    s2.rno = 39;
    s2.gpa = 7.20;

    cout<<s1.name<<endl;
    cout<<s1.rno<<endl;
    cout<<s1.gpa<<endl;
    cout<<s2.name<<endl;
    cout<<s2.rno<<endl;
}

