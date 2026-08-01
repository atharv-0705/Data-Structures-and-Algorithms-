#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements: ";
    // Input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int product = 1;
    for(int i=0;i<n;i++){
        product *= arr[i];
    }
    cout << "Product of Array Elements: " << product << endl;
}