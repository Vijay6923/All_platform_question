#include<bits/stdc++.h>
using namespace std;
int smallestRangeI(vector<int>& nums, int k) {
    int mx = *max_element(nums.begin(), nums.end());
    int mn = *min_element(nums.begin(), nums.end());
    return max(0, (mx - k - mn - k));
}

int main(){
    vector<int> nums = {1, 3, 6};
    int k = 3;
    cout <<smallestRangeI(nums, k) << endl;
    return 0;
}