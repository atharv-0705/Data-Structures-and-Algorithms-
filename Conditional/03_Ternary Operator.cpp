// Greatest of Three Numbers

// condition ? expression_if_true : expression_if_false;

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three positive numbers: ";
    cin >> a >> b >> c;

    // Using nested ternary operator
    int greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    cout << "The greatest number is: " << greatest << endl;

    return 0;
}

// Explanation:
// (a > b) is checked first.

// If true, then (a > c) decides between a and c.

// If false, then (b > c) decides between b and c.