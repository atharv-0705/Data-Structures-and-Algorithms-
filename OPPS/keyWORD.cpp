#include<iostream>
using namespace std;
class Cricketer{//create functions into the class
    public:
        string name;
        int runs;
        float avg;

        Cricketer(string name, int runs,float avg){
            this->name = name;//use this coz name,runs main function Crickets wala nhi balki public wala le
            this->runs = runs;//otherwise garbage value milega
            this->avg = avg;
        }

        void print(int a){
            cout<<name<<" "<<runs<<" "<<avg<<endl;
            cout<<a<<endl;
        }

        int matches(){
            return runs/avg;
        }
};
//passing object to fuction
int main(){
    Cricketer c1("VIRAT KOHLI",25000,55.2);
    Cricketer c2("ROHIT SHARMA",22000,47.3);

   c1.print(18);
   c2.print(45);
    cout<<"mathches of rO : "<<c2.matches()<<endl;
    cout<<"mathches of kO: "<<c1.matches()<<endl;
}