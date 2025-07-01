#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool a[26] = {false};
        int ans = 0;

        for (char i : s) {
            int b = i - 'A';  
            if (a[b]) {
                ans += 1;  
            } else {
                ans += 2;  
                a[b] = true;  
            }
        }

        cout << ans << endl;
    }
}

int main() {
    solve();
    return 0;
}