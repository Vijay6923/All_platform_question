#include<bits/stdc++.h>
using namespace std;
int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int ans = abs(nums[0] - nums[n - 1]);
        for (int i = 0; i< n - 1; i++) {
            ans = max(ans, abs(nums[i] - nums[i + 1]));
        }
        return ans;
        

        
    }
    // circular array
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans=maxAdjacentDistance(nums)<<endl;
    cout<<ans<<endl;

}