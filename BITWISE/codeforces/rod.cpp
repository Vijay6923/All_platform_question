#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int max_len = max(a, max(b, c));
        int min_len = min(a, min(b, c));

        if (max_len - min_len > 2) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}