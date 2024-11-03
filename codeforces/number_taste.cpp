#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        int count = 0;  
        int num = 1;
        while (count < k) {
            if (num % 3 != 0 && num % 10 != 3) {
                count++;  
            }
            if (count == k) {
                cout << num << endl;  
                break;
            }
            num++;
        }
    }
}

int main() {
    solve();
    return 0;
}