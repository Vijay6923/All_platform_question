#include <bits/stdc++.h>
using namespace std;
int modInverse(int a, int m) {
    int m0 = m, x0 = 0, x1 = 1;
    if (m == 1)
        return 0;
    while (a > 1) {
        int q = a / m;
        int t = m;
        m = a % m;
        a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0)
        x1 += m0;
    return x1;
}
int chineseRemainder(vector<int> num, vector<int> rem) {
    int prod = 1;
    int result = 0;
    int n = num.size();
    for (int i = 0; i < n; i++){
        prod *= num[i];
    }
    for (int i = 0; i < n; i++) {
        int pp = prod / num[i];
        int inv = modInverse(pp, num[i]);
        result += rem[i] * inv * pp;
    }
    return result % prod;
}

int main() {
    int n;
    cin>>n;
    vector<int>num(n),rem(n);
    for(int i=0;i<n;i++){
        cin>>num[i]>>rem[i];
    }
    int ans = chineseRemainder(num, rem);
    cout << "The smallest x such that all congruences are satisfied is: " << ans << endl;

    return 0;
}
