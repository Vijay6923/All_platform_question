#include<bits/stdc++.h>
using namespace std;
int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int d=log10(nums[i])+1;
            if(d%2==0)count++;

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
    cout<<findNumbers(nums);
}