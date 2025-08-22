#include<bits/stdc++.h>
using namespace std;
int countPairs(vector<int>& nums, int target) {
    int n=nums.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]<target) count++;
        }
    }
    return count;
        
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    cout<<countPairs(nums,target)<<endl;

}