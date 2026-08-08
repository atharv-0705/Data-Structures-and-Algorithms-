#include <iostream>
using namespace std;

int x = 7; // Global Variable
 
int main(){
    //cout<<x<<endl;  -> 7
    int x=80;  // Local Variable
    cout<<x<<endl;  // Local var. gets Priority.
}
