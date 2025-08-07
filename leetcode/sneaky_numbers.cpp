#include<bits/stdc++.h>
using namespace std;
vector<int> getSneakyNumbers(vector<int>& nums) {
    int n=nums.size();
    vector<int>ans;
    map<int,int>freq;
    for(auto x: nums){
        freq[x]++;
    }
    for(auto x: freq){
        if(x.second>1){
            ans.push_back(x.first);
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
    vector<int>res=getSneakyNumbers(nums);
    for(auto x:res){
        cout<<x<<endl;
    }


}