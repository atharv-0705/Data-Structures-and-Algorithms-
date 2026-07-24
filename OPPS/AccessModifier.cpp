#include<iostream>
using namespace std;
class Student{ 
    public:
        string name;
        int rno;
        void display(){
            cout<<name<< " "<<rno<<" "<<gpa<<endl;
        }
        float getGPA(){
            return gpa;
        }
        
    private:
        float gpa;
      
    };

int main(){
     Student s1;
     s1.name = "ATHARV GUPTA";
     s1.rno = 18;
     //s1.gpa = 8.92; yeh print nhi hoga kyuki private mei hai
     s1.display();
   
} 