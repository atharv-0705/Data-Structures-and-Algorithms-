#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortInWave(vector<int>& arr) {
        for(int i = 0; i < arr.size() - 1; i += 2) {
            swap(arr[i], arr[i + 1]);
        }
    }
};

int main() {
    Solution sol;
    vector<int> arr = {10, 90, 49, 2, 1, 5, 23};

    sol.sortInWave(arr);

    cout << "Wave Sorted Array: ";
    for(int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}
