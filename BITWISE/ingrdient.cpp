#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int ans = 0;
        for (int p = 2; p * p <= k; ++p) {
            int power_p = 0;
            while (k % p == 0) {
                k /= p;
                power_p++;
            }

            for (int i = 0; i < n; ++i) {
                int count_p = 0;
                while (a[i] % p == 0) {
                    a[i] /= p;
                    count_p++;
                }
                ans += max(0, power_p - count_p);
            }
        }

        if (k > 1) { // Handle the last prime factor (if any)
            for (int i = 0; i < n; ++i) {
                ans += a[i] % k;
            }
        }

        cout << ans << endl;
    }

    return 0;
}