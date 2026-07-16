// Display this AP : 2,5,8,11....'n'
// a=2,  d=3,  l=a+(n-1)d
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a = 2, d = 3;
    int l = a + (n - 1) * d; 

    cout << "AP series: ";
    for (int i = a; i <= l; i += d) {
        cout << i;
        if (i != l) cout << ", "; 
    }

    return 0;
}
