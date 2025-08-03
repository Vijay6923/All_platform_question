#include <bits/stdc++.h>
using namespace std;
int minOperations(vector<int>& nums, int k) {
    int n=nums.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    return sum%k;
        
}
int main() {
    int n,k;
    cin >> n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
     cout<<minOperations(nums,k)<<endl;;
    

}