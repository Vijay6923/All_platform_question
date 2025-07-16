#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        while (i < j) {
            while (i < j && nums[i] % 2 == 0)
                i++;
            while (i < j && nums[j] % 2 == 1)
                j--;

            if (i < j)
                swap(nums[i], nums[j]);
        }

        return nums;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {3, 1, 2, 4};
    vector<int> result = obj.sortArrayByParity(nums);

    for (int num : result)
        cout << num << " ";
    cout << endl;

    return 0;
}
