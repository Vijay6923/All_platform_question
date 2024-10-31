#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     sum=sum+i;
    // }
    // int sum1=0;
    // for(int i=0;i<n-1;i++){
    //     sum1=sum1+arr[i];
    // }
    // int ans=sum-sum1;
    // cout<<ans<<endl;
    int xor1=0;
    for(int i=1;i<=n;i++){
        xor1 ^=i;
    }

    int xor2=0;
    for(int i=0;i<n-1;i++){
        xor2 ^=arr[i];
    }

    int ans=xor1 ^ xor2;
    cout<<ans<<endl;
}