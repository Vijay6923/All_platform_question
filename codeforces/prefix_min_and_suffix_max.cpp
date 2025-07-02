#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>pre(n),suf(n);
        pre[0]=a[0];
        for(int i=1;i<n;i++){
            pre[i] = min(pre[i-1],a[i]);
        }
        suf[n-1] = a[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i] = max(suf[i+1],a[i]);
        }
        string ans(n,'0');
        for(int i =0;i<n;i++){
            if (a[i] == pre[i] || a[i] == suf[i]){
                ans[i] = '1';
            }
        }
        cout<<ans<<endl;
    }
    
}