#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i = 0; i < n; i++){
            cin >>a[i];
        }
        vector<int>freq(n+1,0);
        for(int x:a){
            if (x <= n){
                freq[x]++;
            }
        }
        vector<char>b(n+1, false);
        bool flag = true;
        for (int i= 0; i <= n;i++) {
            b[i] = flag;
            if (i<= n && freq[i] == 0)
                flag = false;
        }
        vector<int>diff(n+2,0);
        for (int i = 0; i <= n; i++) {
            if (!b[i]) 
                continue;            
            int l = freq[i];
            int r = n - i;
            if (l<= r) {
                diff[l] += 1;
                diff[r+1] -= 1;
            }
        }
        vector<int>ans(n+1, 0);
        int p = 0;
        for (int i = 0; i <= n; i++) {
            p += diff[i];
            ans[i] = p;
        }
        for (int i = 0; i <= n; i++) {
            cout<<ans[i]<<(i==n?'\n':' ');
        }
    }
    
}