#include<iostream>
using namespace std;
void change(int y[]){
    y[0] = 20;
}
int main(){
    int x[] = {10,20,30,40,50};
    change(x);
    cout<<x[0]<<endl;
}

// When you call change(x), the array is automatically passed as a pointer (basically, the memory address of the first element).

// Inside change, the parameter y[] means “I’m receiving a pointer to an array of integers.”

// So when you write y[0] = 20;, you’re directly changing the first element of the original array x.

// That’s why, after the function call, x[0] has become 20.