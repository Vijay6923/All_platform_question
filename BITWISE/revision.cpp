#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // string ans = "";
    // while(n>0){
    //     if(n%2==0){
    //         ans='0'+ans;
    //     }
    //     else{
    //         ans='1'+ans;
    //     }
    //     n=n>>1;

    // }
    // cout<<ans<<endl;
    string s;
    cin>>s;
    int n=s.length();
    int ans;
    for (int i=0;i<n;i++){
        char ch=s[i];
        int num=ch-'0';
        ans=ans+num*(1<<(n-i-1));
    }
    cout<<ans<<endl;


}