// Vector is Dynamic Array

#include<iostream>
#include<vector>
using namespace std;
int main(){
//    vector<int> arr(5);  -> Output: 0 0 0 0 0 
    vector<int> arr(5,18); // vector of size 5 and Default value is 18. 
    cout<<arr.size()<<endl; // Output: 5
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
    arr.push_back(20); // Add 20 at the end of the vector
    cout<<endl;
    
    cout<<arr.size()<<endl; // Output: 6
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    arr.push_back(14);
    arr.pop_back(); // Remove last element of the vector
    cout<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
} 
