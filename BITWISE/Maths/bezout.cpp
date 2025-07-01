#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=arr[0];
    for(int i=1;i<n;i++){
        ans=__gcd(ans,arr[i]);
    }
    if(ans==1){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
}