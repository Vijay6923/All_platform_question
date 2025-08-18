#include<bits/stdc++.h>
using namespace std;
vector<int> transformArray(vector<int>& nums) {
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]%2==0){
            nums[i]=0;
        }
        else{
            nums[i]=1;
        }
    }
    sort(nums.begin(),nums.end());
    return nums;
        
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>ans=transformArray(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

}