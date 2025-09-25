#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int mx1 = INT_MIN, mx2 = INT_MIN;

    for (int x : nums) {
        if (x >= mx1) {
            mx2 = mx1;
            mx1 = x;
        } 
        else if (x >= mx2) {
            mx2 = x;
        }
    }

    return (mx1 - 1) * (mx2 - 1);
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

    int result = maxProduct(nums);
    cout << "Maximum product of (nums[i]-1)*(nums[j]-1): " << result << endl;

    return 0;
}
