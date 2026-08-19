#include <iostream>
using namespace std;

int main() {
    int a[] = {10,20,30,40,70,90,100};
    int b[] = {30,50,60,80};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    int c[m+n];

    int i = 0, j = 0, k = 0;

    // Merge until one array is exhausted
    while(i < m && j < n) {
        if(a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    // Copy remaining elements of a[]
    while(i < m) {
        c[k++] = a[i++];
    }

    // Copy remaining elements of b[]
    while(j < n) {
        c[k++] = b[j++];
    }

    // Print merged array
    for(int x = 0; x < m+n; x++) {
        cout << c[x] << " ";
    }
    cout << endl;

    return 0;
}
