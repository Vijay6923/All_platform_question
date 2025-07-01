#include<bits/stdc++.h>
using namespace std;
 
long long find_smallest_prime(long long n) {
    if (n % 2 == 0) return 2;
    if (n % 3 == 0) return 3;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0) return i;
        if (n % (i + 2) == 0) return i + 2;
    }
    if (n > 1) return n;
    return 1;
}
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    long long limit = sqrt(n);
    for (long long i = 5; i <= limit; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long gcd = __gcd(a, b);
        long long l = (a / gcd) * b;
        long long mx = max(a, b);
        if (l != mx) {
            cout << l << endl;
        } else {
            if (isPrime(l)) {
                cout << l * l << endl;
            } else {
                long long spf = find_smallest_prime(l);
                cout << l * spf << endl;
            }
        }
    }
    return 0;
}