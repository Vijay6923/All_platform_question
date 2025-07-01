#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            b[i] = a[i]; 
        }
        sort(b.begin(), b.end());
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            if ((a[i] % 2) != (b[i] % 2)) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}