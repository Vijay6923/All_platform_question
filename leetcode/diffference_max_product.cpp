#include <bits/stdc++.h>
using namespace std;

int maxProductDifference(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    return (nums[n - 1] * nums[n - 2]) - (nums[0] * nums[1]);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = maxProductDifference(nums);
    cout << "Maximum product difference: " << result << endl;

    return 0;
}
