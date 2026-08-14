#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& arr, int i, int j) {
        while(i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n;  // handle cases where k > n
        reverse(arr, 0, n - 1);
        reverse(arr, 0, k - 1);
        reverse(arr, k, n - 1);
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    Solution sol;
    sol.rotate(arr, k);

    cout << "Rotated array: ";
    for(int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}
