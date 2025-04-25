#include <bits/stdc++.h>
using namespace std;
long long lcm(long long a, long long b) {
    return (a / __gcd(a, b)) * b;
}
int main() {
    long long x;
    cin >> x;
    long long a = 1, b = x;
    for (long long i = 1; i * i <= x; ++i) {
        if (x % i == 0) {
            long long j = x / i;
            if (lcm(i, j) == x) {
                if (max(i, j) < max(a, b)) {
                    a = i;
                    b = j;
                }
            }
        }
    }

    cout << a << " " << b << endl;
    return 0;
}
