// arr  = {10,20,30,40,50,60,70};

// Reverse the array : {70,60,50,40,30,20,10};

#include<iostream>
using namespace std;

// void print(int arr[], int n) {
//     for(int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;
// }

// int main() {
//     int arr[] = {10,20,30,40,50,60,70};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int i = 0, j = n - 1;
//     while(i < j) {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     }

//     print(arr, n);
//     return 0;
// }


#include<vector>
void print(vector<int>& arr){
    for(int ele : arr) cout<<ele<<" ";
    cout<<endl;
}

int main(){
     vector<int> arr = {10,20,30,40,50,60,70};
     int i = 0;
     int j = arr.size() - 1;

     while(i<j){
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
         i++;
         j--;
     }
     print(arr);
}

// If array is fixed size, we can use the above method. But if the array is dynamic, we can use the below method.