#include <bits/stdc++.h>
using namespace std;

int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int n : nums) {
        freq[n]++;
    }

    int max_freq = 0;
    for (auto& [key, value] : freq) {
        max_freq = max(max_freq, value);
    }

    int total = 0;
    for (auto& [key, value] : freq) {
        if (value == max_freq)
            total += value;
    }

    return total;
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

    cout << "Sum of elements with maximum frequency: " 
         << maxFrequencyElements(nums) << endl;

    return 0;
}
