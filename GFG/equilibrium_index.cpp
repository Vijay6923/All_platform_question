#include<bits/stdc++.h>
using namespace std;
int findEquilibrium(vector<int> &arr) {
        // code here
        int n=arr.size();
        int sum=0;
        vector<int>psum(n);
        for(int i=0;i<n;i++){
            sum+=arr[i];
            psum[i]=sum;
        }
        int idx=-1;
        for(int i=1;i<n-1;i++){
            if(psum[i-1]==(sum-psum[i])){
                idx=i;
                break;
            }
        }
        return idx;
    }
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findEquilibrium(arr);

}