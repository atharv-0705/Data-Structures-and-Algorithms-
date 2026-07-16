// Print this series: 99, 95, 91, 87... upto all terms which are positivc
// a=99, d=-4, n=? , l=?

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a = 99, d = -4;

    cout << "Series: ";
    for(int i=0; i<=n; i++){
        int term = a+i*d;  //nth term
        if( term >= 0){
            cout<<term;
            if (i != n - 1 && (a + (i+1)*d) > 0) cout << ", ";
        }
    }

    cout << endl;

    return 0;
}
