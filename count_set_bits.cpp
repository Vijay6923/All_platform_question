#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int ans= __builtin_popcount(n);
    // cout<<ans<<endl;
    

    int count=0;
    while(n>0){
        count++;
        n=n & (n-1);
    }
    cout<<count<<endl;
}