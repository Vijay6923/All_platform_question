#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        for (int i = 0; i < 64; i++) {
            ll num = 1ll << i; 
            if ((l | num) <= r) {
                l |= num; 
            } else {
                break;
            }
        }
        cout <<l<<endl;
    }
}