#include <bits/stdc++.h>
using namespace std;

int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int ans = 0;
    for (int i = 0; i < nums.size(); i += 2) {
        ans += nums[i];
    }
    return ans;  
}

int main() {
    int n;
    cout << "Enter number of elements (even size required): ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Maximum sum of pairs: " << arrayPairSum(nums) << endl;

    return 0;
}
