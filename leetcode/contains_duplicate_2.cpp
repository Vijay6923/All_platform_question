#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            int val = nums[i];
            if (m.find(val) != m.end() && i - m[val] <= k) {
                return true;
            }
            m[val] = i;
        }
        return false;  
    }
};
int main() {
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;

    Solution sol;
    bool result = sol.containsNearbyDuplicate(nums, k);

    if (result)
        cout << "Contains nearby duplicate within distance " << k << "." << endl;
    else
        cout << "No nearby duplicate within distance " << k << "." << endl;

    return 0;
}