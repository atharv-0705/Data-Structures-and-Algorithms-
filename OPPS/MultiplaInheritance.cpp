#include<iostream>
using namespace std;
class Cricketer{ 
public:
    int runs;
    int wickets;
    int average;
protected:
    int matches;
//we can use protected in derived class
};
class Engineer{
public:
    int experience;
    string domain;
};
class Phodu : public Engineer,Cricketer{// multiple inheritance
public:
};

int main(){

}