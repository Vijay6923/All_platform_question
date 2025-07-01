#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n), prefix(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        prefix[i] = a[i] + (i > 0 ? prefix[i - 1] : 0);
    }
    int m;
    cin >> m;
    // binary search
    while (m--) {
        int q;
        cin >> q; 
        int l = 0, r = n - 1, ans = -1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (prefix[mid] >= q) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans + 1 << '\n'; 
    }

    
}