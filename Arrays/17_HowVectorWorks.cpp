#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5); // Size = 1, Capacity = 1
    v.push_back(10); // Size = 2, Capacity = 2
    v.push_back(4); // Size = 3, Capacity = 4
    v.push_back(0); // Size = 4, Capacity = 4
    v.push_back(-51); // Size = 5, Capacity = 8
    v.push_back(9); // Size = 6, Capacity = 8
    v.push_back(82); // Size = 7, Capacity = 8
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(100); // Size = 8, Capacity = 8
    v.push_back(101); // Size = 9, Capacity = 16
    v.pop_back(); // Size = 8, Capacity = 16
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
}