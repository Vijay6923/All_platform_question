#include<bits/stdc++.h>
using namespace std;
int longestSubarray(vector<int>& nums) {
    int n=nums.size();
    int mx=*max_element(nums.begin(),nums.end());
    int l=1;
    int ans=1;
    for(int i=0;i<n;i++){
        if(nums[i]==mx){
            l++;
        }
        else{
            l=1;
        }
        ans=max(ans,l);
    }
    return ans-1;
        
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<longestSubarray(nums)<<endl;
}