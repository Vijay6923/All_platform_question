#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> s(nums.begin(), nums.end());
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (s.count(nums[i] + diff) && s.count(nums[i] + 2 * diff)) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    int n, diff;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter difference: ";
    cin >> diff;

    int result = sol.arithmeticTriplets(nums, diff);
    cout << "Number of arithmetic triplets: " << result << endl;

    return 0;
}
