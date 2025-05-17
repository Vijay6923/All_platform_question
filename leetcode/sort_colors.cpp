#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int n=nums.size();
    int l=0;
    int m=0;
    int h=n-1;
    while(m<=h){
        if(nums[m]==2){
            swap(nums[m],nums[h]);
            h--;
        }
        else if(nums[m]==0){
            swap(nums[m],nums[l]);
            m++;
            l++;
        }
        else{
            m++;
        }
    }
    return ;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];

    }
    sortColors(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

}