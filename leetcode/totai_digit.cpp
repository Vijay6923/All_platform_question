#include<bits/stdc++.h>
using namespace std;
int differenceOfSum(vector<int>& nums) {
    int total = 0;
    int digit = 0;
    for (int num : nums) {
        total += num;
        while (num > 0) {
            digit += num % 10;
            num /= 10;
        }
    }

    return total - digit;
        
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<differenceOfSum(nums)<<endl;
}