#include<bits/stdc++.h>
using namespace std;
vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
    for(int i=0;i<k;i++){
        int min=nums[0];
        int index=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]<min){
                min=nums[j];
                index=j;
            }
        }
        nums[index]=min*multiplier;
        }
    return nums;
}

int main(){
    vector<int> nums={2,5,3};
    int k=4, multiplier=2;
    vector<int> ans=getFinalState(nums,k,multiplier);
    for(int x:ans) cout<<x<<" ";
    cout<<endl;
    return 0;
}