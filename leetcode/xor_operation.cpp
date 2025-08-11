#include<bits/stdc++.h>
using namespace std;
int xorOperation(int n, int start) {
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        nums[i]=start+2*i;
    }
    int ans=nums[0];
    for(int i=1;i<n;i++){
        ans=ans^nums[i];
    }
    return ans;
}
int main(){
    int n,start;
    cin>>n>>start;
    cout<<xorOperation(n,start);
}