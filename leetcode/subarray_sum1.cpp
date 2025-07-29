#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> lastSeen(30, -1); // -1 means bit not seen yet
        vector<int> res(n, 1);

        for (int i = n - 1; i >= 0; --i) {
            for (int bit = 0; bit < 30; ++bit) {
                if (nums[i] & (1 << bit)) {
                    lastSeen[bit] = i;
                }
            }

            int maxReach = i;
            for (int bit = 0; bit < 30; ++bit) {
                if (lastSeen[bit] != -1) {
                    maxReach = max(maxReach, lastSeen[bit]);
                }
            }

            res[i] = maxReach - i + 1;
        }

        return res;
    }
};

int main() {
    vector<int> nums = {1, 0, 2, 1, 3};
    Solution sol;
    vector<int> result = sol.smallestSubarrays(nums);

    cout << "Smallest subarrays: ";
    for (int val : result) cout << val << " ";
    cout << endl;

    return 0;
}