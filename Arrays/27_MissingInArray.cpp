#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Approach 1: Using extra space (O(n) time, O(n) space)
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<bool> flag(n + 1, false);
        for(int i = 0; i < n; i++) {
            flag[nums[i]] = true;
        }
        for(int i = 0; i <= n; i++) {
            if(flag[i] == false) return i;
        }
        return -1; // should never reach here
    }

    // Approach 2: Sorting (O(n log n) time, O(1) extra space)
    /*
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++) {
            if(i != nums[i]) return i;
        }
        return n;
    }
    */

    // Approach 3: Brute force (O(n^2) time, O(1) space)
    /*
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i <= n; i++) {
            bool flag = false;
            for(int ele : nums) {
                if(ele == i) {
                    flag = true;
                    break;
                }
            }
            if(flag == false) return i;
        }
        return -1;
    }
    */
};

int main() {
    Solution sol;
    vector<int> nums = {3, 0, 1};
    cout << "Missing number: " << sol.missingNumber(nums) << endl;
    return 0;
}
