#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int mn = a[0], mx = a[n - 1];
        int ans = mx - mn + min(abs(s - mn), abs(s - mx));
        cout << ans <<endl;
    }
}