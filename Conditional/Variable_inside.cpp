#include<iostream>
using namespace std;
int main(){
    int x = 5, y = 10;
    if(x++ || y++)
    cout<<x<<endl<<y;
    else
    cout << "Aarush" << endl;
    }
// Explanation:
// In this code snippet, we have two integer variables `x` and `y` initialized to 5 and 10 respectively. 
// The `if` statement checks the condition `x++ || y++`.
// The `||` operator is a logical OR operator, which means that 
// if the first condition `x++` evaluates to true (non-zero), the second condition `y++` will not be evaluated due to short-circuiting behavior of the logical OR operator.

// Check with x= 0, y=0
