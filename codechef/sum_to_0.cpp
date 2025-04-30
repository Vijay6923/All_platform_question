#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        if(n == 1) {
            cout << -1 << endl;
            continue;
        }
        vector<int>ans;
        if(n % 2==0){
            for(int i = 0; i < n / 2; ++i) {
                ans.push_back(1);
                ans.push_back(-1);
            }
        } else {
            ans ={1, 2, -3};
            int rem= n - 3;
            for(int i = 0;i < rem/2;++i) {
                ans.push_back(1);
                ans.push_back(-1);
            }
        }
        for(int num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    
}