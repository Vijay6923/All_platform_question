#include<bits/stdc++.h>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> res;
    int i, j;
    int count[101] = {0, 0, 0};
	int len = nums.size();
    for(i = 0; i < len; i++) {
        count[nums[i]]++;
    }
    for(i = 1; i < 101; i++) {
        count[i] += count[i - 1];
    }
    for(i = 0; i < len; i++) {
        if(nums[i] == 0){
            res.push_back(0);
        }
        else{
            res.push_back(count[nums[i] - 1]);
        }
            
                
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>ans=smallerNumbersThanCurrent(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

}