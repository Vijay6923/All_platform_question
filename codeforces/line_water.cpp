#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int tripleDots = 0;
        int remainingDots = 0;
        for (int i = 0; i < n;) {
            if (i + 2 < n && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') {
                tripleDots++;
                i += 3;
            } else if (s[i] == '.') {
                remainingDots++;
                i++;
            } else {
                i++;
            }
        }
        if (tripleDots > 0) {
            cout << 2 << '\n';
        } else {
            cout << remainingDots << '\n';
        }
    }
    return 0;
}