#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> res(nums.size(), 0);
    int left = 0;
    int right = nums.size() - 1;

    for (int i = nums.size() - 1; i >= 0; i--) {
        if (abs(nums[left]) > abs(nums[right])) {
            res[i] = nums[left] * nums[left];
            left++;
        } else {
            res[i] = nums[right] * nums[right];
            right--;
        }
    }
    return res;
}
// main funtion
int main() {
    vector<int> nums = {-7, -3, 2, 3, 11};
    vector<int> ans = sortedSquares(nums);

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}