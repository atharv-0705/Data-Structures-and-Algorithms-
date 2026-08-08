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
void change(Cricketer*c){
    //(*c).avg = 77.2;both are same
    c->avg = 77.2;

}

int main(){
    Cricketer c1("VIRAT KOHLI",25000,55.2);

        cout<<c1.avg<<endl;
        change(&c1);//Pass by refrence
        cout<<c1.avg<<endl;
        
}