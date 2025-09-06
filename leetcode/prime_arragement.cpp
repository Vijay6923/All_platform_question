#include <bits/stdc++.h>
using namespace std;

static constexpr int MOD = 1e9 + 7;

long long fact(int n) {
    long long res = 1;
    for (int i = 2; i <= n; ++i)
        res = (res * i) % MOD;
    return res;
}

int numPrimeArrangements(int n) {
    if (n == 1) return 1;

    int primes = 0;
    for (int i = 2; i <= n; ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) primes++;
    }

    return (fact(primes) * fact(n - primes)) % MOD;
}

int main() {
    int n;
    cin >> n;
    cout << numPrimeArrangements(n) << "\n";
    return 0;
}