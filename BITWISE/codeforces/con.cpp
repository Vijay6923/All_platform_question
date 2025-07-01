#include <bits/stdc++.h>
using namespace std;

bool canMatch(const string &p, const string &s) {
    int i = 0, j = 0;
    int n = p.length(), m = s.length();

    while (i < n && j < m) {
        if (s[j] != p[i]) return false;
        if (j + 1 < m && s[j] == s[j + 1]) {
            j += 2;
        } else {
            j += 1;
        }
        i++;
    }
    return (i == n && j == m);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;
        cout << (canMatch(p, s) ? "YES" : "NO") << endl;
    }
    return 0;
}
