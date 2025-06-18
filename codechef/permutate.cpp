#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x > 0 && y > 0) {
            if (x <= z) cout << "Yes\n";
            else cout << "No\n";
        }
        else if (y == 0) {
            if (x <= z + 1) cout << "Yes\n";
            else cout << "No\n";
        }
        else { 
            cout << "Yes\n";
        }
    }
    return 0;
}
