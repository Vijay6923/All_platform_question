#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int farthest = 0;
        int currentEnd = 0;

        for (int i = 0; i < nums.size() - 1; ++i) {
            farthest = max(farthest, i + nums[i]);
            if (i == currentEnd) {
                jumps++;
                currentEnd = farthest;
            }
        }

        return jumps;
    }
};
int main() {
    vector<int> nums = {2, 3, 1, 1, 4}; 

    Solution sol;
    int result = sol.jump(nums);

    cout << "Minimum jumps to reach the end: " << result << endl;

    return 0;
}