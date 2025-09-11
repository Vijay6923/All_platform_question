#include <bits/stdc++.h>
using namespace std;

int minimumSum(int num) {
    vector<int> nums;
    while (num > 0) {
        nums.push_back(num % 10);
        num = num / 10;
    }
    sort(nums.begin(), nums.end());
    
    int num1 = nums[0] * 10 + nums[2];
    int num2 = nums[1] * 10 + nums[3];
    
    return num1 + num2;
}

int main() {
    int num;
    cout << "Enter a 4-digit number: ";
    cin >> num;

    cout << "Minimum sum = " << minimumSum(num) << endl;

    return 0;
}
