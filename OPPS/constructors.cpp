#include<iostream>
using namespace std;
class Student{ 
public:
    string name;
    int rno;
    float gpa;
//parametric constructor
    Student(string s,int r, float g){
        name = s;
        rno = r;
        gpa = g;
    }
    Student(){ //default constructor

    }
    Student(int r,string s){
        name = s;
        rno = r;
    }
};

int main(){
    Student s1("ATHARV GUPTA",18,7.40);


    Student s2;
    s2.name = "hiamnshu";
    s2.rno = 39;
    s2.gpa = 7.20;

    Student s3(55,"RAGHAV");
    
    Student s4 = s1;
    s4.name = "OM";

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
    cout<<s3.name<<" "<<s3.rno<<" "<<endl;
    cout<<s4.name<<" "<<s4.rno<<" "<<endl;
}

