#include<bits/stdc++.h>
using namespace std;
long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        long long count =0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=nums[i]+nums[j];
                if(sum>=lower && sum<=upper){
                    count++;
                }
            }
        }
        return count;
        
    }
int main(){
    int n;
    cin>>n;
    int lower,upper;
    cin>>lower>>upper;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<countFairPairs(nums,lower,upper);

}