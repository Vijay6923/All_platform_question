#include <bits/stdc++.h>
using namespace std;

vector<int> numberGame(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int i = 0, j = 1;
    while (i < n && j < n) {
        swap(nums[i], nums[j]);
        i += 2;
        j += 2;
    }
    return nums;
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

    vector<int> result = numberGame(nums);

    cout << "Rearranged array: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
