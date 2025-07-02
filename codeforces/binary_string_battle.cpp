#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int c1 = 0;
        for (char c : s) {
            if (c == '1') {
                c1++;
            }
        }
        if (c1 <= k || n < 2 * k) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }
}