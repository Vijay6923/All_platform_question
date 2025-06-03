#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long y, x;
        cin >> y >> x;
        long long n = max(y, x);
        long long ans;

        if (y > x) {
            if (n % 2 == 0) {
                ans = n*n - (x - 1);
            } else {
                ans = (n-1)*(n-1) + x;
            }
        } else {
            if (n % 2 == 1) {
                ans = n*n - (y - 1);
            } else {
                ans = (n-1)*(n-1) + y;
            }
        }

        cout << ans << "\n";
    }
    
}
