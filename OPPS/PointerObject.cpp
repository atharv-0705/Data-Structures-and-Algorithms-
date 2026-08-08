#include<iostream>
using namespace std;
class Cricketer{//create functions into the class
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
  

        Cricketer*p1 = &c1;
        cout<<(*p1).runs<<endl;//c1.runs
        cout<<c1.avg<<endl;
        (*p1).avg = 77.5;//c1.avg = 77.5
        cout<<c1.avg<<endl;
}