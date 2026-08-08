// Display G.P.: 1,2,4,8,16
// a=1, r=2 , l=a*r^n-1

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a = 1, r = 2;

    cout << "GP series: ";
    int term = a;
    for (int i = 0; i < n; i++) {
        cout << term;
        if (i != n - 1) cout << ", ";
        term *= r;  // next term
    }
    cout << endl;

    return 0;
}

