#include <bits/stdc++.h>
using namespace std;

int findNonMinOrMax(vector<int>& nums) {
    int n = nums.size();
    int mn = *min_element(nums.begin(), nums.end());
    int mx = *max_element(nums.begin(), nums.end());
    int ans = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] == mn || nums[i] == mx) {
            continue;
        } else {
            ans = nums[i];
            break;
        }
    }
    return ans;
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

    cout << "A number that is neither min nor max (or -1 if none): " 
         << findNonMinOrMax(nums) << endl;

    return 0;
}
