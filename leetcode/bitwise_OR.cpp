#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        int total = 1 << n;
        int max_or = 0;
        int count = 0;
        for (int mask = 0; mask < total; mask++) {
            int or_sum = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    or_sum |= nums[i];
                }
            }
            if (or_sum > max_or) {
                max_or = or_sum;
                count = 1;
            } else if (or_sum == max_or) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 1};
    cout << sol.countMaxOrSubsets(nums) << endl;  // Output: 2
    return 0;
}
