#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> m;
        
        // Count frequency of each element
        for (auto i : nums)
            m[i]++;
        
        int res = 0;
        
        // Check for harmonious pairs
        for (auto it : m) {
            if (m.count(it.first - 1) > 0) {
                res = max(res, it.second + m[it.first - 1]);
            }
        }
        
        return res;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
    
    int result = sol.findLHS(nums);
    cout << "Length of Longest Harmonious Subsequence: " << result << endl;
    
    return 0;
}
