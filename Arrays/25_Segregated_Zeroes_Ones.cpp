#include <iostream>
#include <vector>
using namespace std;

void segregateZerosAndOnes(vector<int>& arr) {
    int left = 0;
    int right = arr.size()-1;
    while(left < right){
        if(arr[left] == 0){
            left++;
        }
        else if(arr[right] == 1){
            right--;
        }
        else{
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}


int main(){
    vector<int> arr = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};

    segregateZerosAndOnes(arr);

    cout<<"Modified Array: ";
    for(int ele : arr) cout<<ele<<" ";
    cout<<endl;
}