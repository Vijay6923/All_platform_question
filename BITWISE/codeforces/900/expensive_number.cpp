#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        bool flag = false;
        int c0 = 0;
        
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] != '0') {
                flag = true;
            } else if (flag) {
                c0++;
            }
        }
        
        cout << n - (c0 + 1) << '\n';
    }
    return 0;
}