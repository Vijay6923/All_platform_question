#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int prev = 0;
        int curr = 1;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] < nums[i]) {
                curr++;
            } else {
                prev = curr;
                curr = 1;
            }
            if ((curr >= k && prev >= k) || curr == k * 2)
                return true;
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1, 2, 3, 4};
    int k = 3;
    bool ans = sol.hasIncreasingSubarrays(nums, k);
    cout << (ans ? "true" : "false") << endl;  // Output: true
    return 0;
}
