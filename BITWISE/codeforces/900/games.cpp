#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int c1=0;
        int c0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') c1++;
            else c0++;
        }
        int ans=min(c1,c0);
        if(ans%2!=0){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }
}