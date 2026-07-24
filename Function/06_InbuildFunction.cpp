#include <iostream>
#include <cmath>
using namespace std;

int max3(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (c >= b && c >= a) return c;
    return b;
}

int main() {
    cout << std::max(5, 3) << endl;     // built-in max
    cout << max3(2, 7, 4) << endl;      // custom 3-number max
    cout << pow(2.7, 2) << endl;        // in-built power
    cout << sqrt(81) << endl;           // in-built square root
    cout << cbrt(81) << endl;           // in-built cube root
    cout<< abs(-199) << endl;           // in-build absolute 
}
