#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int i=0;
    int j=0;
    int ans=0;
    while(j<n){
        if(s[i]!=s[j]){
            i=j;
        }
        int len=j-i+1;
        ans=max(ans,len);
        j++;
        
    }
    cout<<ans<<endl;
    
}