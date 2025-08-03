#include <bits/stdc++.h>
using namespace std;
int numIdenticalPairs(vector<int>& nums) {
    int n=nums.size();
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i<j){
                if(nums[i]==nums[j]) ans++;
            }
        }
    }
    return ans;
        
}
int main() {
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
     cout<<numIdenticalPairs(nums)<<endl;;
    

}