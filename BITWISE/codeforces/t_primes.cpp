#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPrime(ll n) {
    if(n <= 1) return false;
    for(ll i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}
// main function
int main() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(ll i = 0; i < n; i++) {
        ll sq = sqrt(arr[i]);
        if(sq * sq == arr[i] && isPrime(sq)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
