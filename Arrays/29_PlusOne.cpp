#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;   // start with +1
        vector<int> ans;

        for(int i = digits.size() - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            if(sum < 10) {
                carry = 0;
                ans.push_back(sum);
            } else {
                carry = 1;
                ans.push_back(0);
            }
        }

        if(carry == 1) ans.push_back(1);

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> digits = {9, 9, 9};

    vector<int> result = sol.plusOne(digits);

    cout << "Result: ";
    for(int d : result) {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}
