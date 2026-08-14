#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(7); // vector of size 7 and Default value is 0.
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(-6);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
}

// In your case, the vector started with capacity 7.
// After pushing one more element, it needed to grow: (7 → 14 → 28).
// Capacity growth is not fixed