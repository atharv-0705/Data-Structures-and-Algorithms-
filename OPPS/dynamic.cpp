#include<iostream>
using namespace std;
class Cricketer{
    public:
        string name;
        int runs;
        float avg;

        Cricketer(string name, int runs,float avg){
            this->name = name;
             this->runs = runs;
            this->avg = avg;
        }
};

int main(){
    Cricketer c1("VIRAT KOHLI",25000,55.2);
    Cricketer*c2 = new Cricketer("ROHIT SHARMA",22000,47.3); //Object Pointer

        cout<<c1.name<<" "<<c1.runs<<endl;
        cout<<c2->name<<" "<<c2->runs<<endl;
//c2->name == (*c2).name

}