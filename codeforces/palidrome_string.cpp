#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; 
    cin>>t;
    while(t--){
        int n,k; 
        cin>>n>>k;
        string s; 
        cin >>s;
        int c0 = 0;
        for(char x : s) if(x =='0') c0++;
        int half= n / 2;
        int p = c0 -(half-k);
        if (p >= 0 && p % 2 == 0) {
            int x = p / 2;
            if (x >= 0 && x <= k) {
                cout <<"YES"<<endl;
                continue;
            }
        }
        cout <<"NO"<<endl;
    }
}