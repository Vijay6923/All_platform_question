#include <bits/stdc++.h>
using namespace std;

int thirdMax(vector<int>& nums) {
    long int largest = LONG_MIN;
    long int secondLargest = LONG_MIN;
    long int thirdLargest = LONG_MIN;

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] > largest) {
            thirdLargest = secondLargest;
            secondLargest = largest;
            largest = nums[i];
        }
        else if (nums[i] > secondLargest && nums[i] != largest) {
            thirdLargest = secondLargest;
            secondLargest = nums[i];
        }
        else if (nums[i] > thirdLargest && nums[i] != secondLargest && nums[i] != largest) {
            thirdLargest = nums[i];
        }
    }

    if (thirdLargest == LONG_MIN) return largest;
    return thirdLargest;
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

    cout << "Third maximum (or max if fewer than 3 distinct): " << thirdMax(nums) << endl;

    return 0;
}
