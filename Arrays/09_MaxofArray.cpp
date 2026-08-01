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
    int mx = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > mx)
            mx = arr[i];
    }
    cout << "Maximum Element in Array: " << mx << endl;
}