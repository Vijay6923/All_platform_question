#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        int mn = *min_element(a.begin(), a.end());
        int mx = *max_element(a.begin(), a.end());
        if ((mn+mx) % 2 == 0) {
            cout << 0 << endl;
            continue;
        }
        int ans = INT_MAX;
        for (int x : a) {
            for (int y : a) {
                if (x <= y && (x + y) % 2 == 0) {
                    int cnt = 0;
                    for (int num : a) {
                        if (num < x || num > y) {
                            cnt++;
                        }
                    }
                    if (cnt < ans) {
                        ans = cnt;
                    }
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}