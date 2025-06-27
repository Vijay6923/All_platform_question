#include <iostream>
#include <vector>

using namespace std;

// Extended Euclidean Algorithm to find modular inverse
int modInverse(int a, int m) {
    int m0 = m, x0 = 0, x1 = 1;
    if (m == 1)
        return 0;
    
    while (a > 1) {
        int q = a / m;
        int t = m;

        // Update m and a
        m = a % m;
        a = t;

        // Update x0 and x1
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }

    // Make x1 positive
    if (x1 < 0)
        x1 += m0;

    return x1;
}

// Chinese Remainder Theorem
int chineseRemainder(vector<int> num, vector<int> rem) {
    int prod = 1;
    int result = 0;

    int n = num.size();

    // Compute product of all moduli
    for (int i = 0; i < n; i++)
        prod *= num[i];

    // Apply CRT formula
    for (int i = 0; i < n; i++) {
        int pp = prod / num[i];
        int inv = modInverse(pp, num[i]);
        result += rem[i] * inv * pp;
    }

    return result % prod;
}

int main() {
    // Example: x ≡ 2 (mod 3), x ≡ 3 (mod 4), x ≡ 2 (mod 5)
    vector<int> num = {3, 4, 5};
    vector<int> rem = {2, 3, 2};

    int x = chineseRemainder(num, rem);
    cout << "The smallest x such that all congruences are satisfied is: " << x << endl;

    return 0;
}
