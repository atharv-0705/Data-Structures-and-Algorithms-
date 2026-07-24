#include <iostream>
#include <cmath>
using namespace std;

int maximum(int a, int b, int c) {
    max(a, max(b,c));
}

int main() {
    cout << maximum(373,199,393) <<endl;          
}
