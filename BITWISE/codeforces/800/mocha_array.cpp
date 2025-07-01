#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while(b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        bool found = false;
        for(int i = 0; i < n && !found; i++) {
            for(int j = i + 1; j < n; j++) {
                if(gcd(a[i], a[j]) <= 2) {
                    found = true;
                    break;
                }
            }
        }

        cout << (found ? "Yes\n" : "No\n");
    }
    return 0;
}