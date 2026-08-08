#include<iostream>
using namespace std;
class Student{ 
    public:
        string name;
        int rno;
        Student(int r,string n, float g){
            rno = r;
            name = n;
            gpa = g;
        }
        float getGPA(){ //getter
            return gpa;
        }
        void setGPA(float g){ //setter 
            gpa = g;
        }
        
    private:
        float gpa;
      
    };

int main(){
     Student s1(18,"ATHARV", 7.40);
     cout<<s1.getGPA()<<endl;
   //iss tarike se private ke attributes print hote hai
   s1.setGPA(8.6);
   cout<<s1.getGPA()<<endl;

} 