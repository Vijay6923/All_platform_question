#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
        unordered_map<int,int>s;
        for(int i=0;i<nums.size();i++){
            s[nums[i]]++;
        }
        for(auto x:s){
            if(x.second==1){
                return x.first;
            }
        }
        return 1;
        
    }
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>n;
    }
    cout<<singleNumber(nums)<<endl;

}