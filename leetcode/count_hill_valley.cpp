#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int l = 0; 
        for (int i = 1; i < n - 1; ++i) {
            if ((nums[i] > nums[l] && nums[i] > nums[i + 1]) ||
                (nums[i] < nums[l] && nums[i] < nums[i + 1])) {
                ans++;
            }

            l = i;
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {2, 4, 1, 1, 6, 5};
    Solution sol;
    cout << "Number of hills and valleys: " << sol.countHillValley(nums) << endl;
    return 0;
}