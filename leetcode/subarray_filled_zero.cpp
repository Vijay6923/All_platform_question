#include<bits/stdc++.h>
using namespace std;
long long zeroFilledSubarray(vector<int>& nums) {
    long long  n=nums.size();
    long long count=0;
    long long  ans=0;
    for(long long  i=0;i<n;i++){
        if(nums[i]==0){
            count++;
            ans+=count;
        }
        else{
            count=0;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<zeroFilledSubarray(nums)<<endl;

}