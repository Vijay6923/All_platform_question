#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    int no = 0, po = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == -1) no++;
        else po++;
    }

    int ans = 0;

    if (no > po) {
        ans += (no - (n / 2));  
        no -= ans;
    }

    if (no % 2 != 0) ans++;  

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        solve();
    }
    return 0;
}