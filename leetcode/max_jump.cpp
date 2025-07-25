#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jump = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > jump) return false;
            jump = max(jump, i + nums[i]);
        }
        return true;
    }
};

int main() {
    // Example input
    vector<int> nums = {2, 3, 1, 1, 4};

    Solution sol;
    bool result = sol.canJump(nums);

    if (result)
        cout << "Can reach the last index." << endl;
    else
        cout << "Cannot reach the last index." << endl;

    return 0;
}