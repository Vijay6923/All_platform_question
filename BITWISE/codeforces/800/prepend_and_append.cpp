#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       int i=0;
       int j=n-1;
       int count=0;
       while(i<=j){
           if(s[i]!=s[j]){
               count++;
           }
           else{
               break;
           }
           i++;
           j--;
       }
       int ans=n-(2*count);
       cout<<ans<<endl;
    }
}