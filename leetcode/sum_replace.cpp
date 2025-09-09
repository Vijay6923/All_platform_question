#include <bits/stdc++.h>
using namespace std;

int sumdigit(int n) {
    int ans = 0;
    while (n > 0) {
        int r = n % 10;
        ans += r;
        n /= 10;
    }
    return ans;
}

int minElement(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        nums[i] = sumdigit(nums[i]);
    }
    int mn = *min_element(nums.begin(), nums.end());
    return mn;
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    int result = minElement(nums);
    cout << "Minimum digit sum in the array = " << result << endl;

    return 0;
}
