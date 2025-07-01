#include<bits/stdc++.h>
using namespace std;
long long lcm(long long a, long long b) {
    return (a * b) / __gcd(a, b);
}
 
int main(){
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long min_lcm = LLONG_MAX;
        long long a_ans = 1, b_ans = n - 1; 
 
        for (long long i = 1; i * i <= n; ++i) {
            if (n % i == 0) {
                for (long long div : {i, n / i}) {
                    long long b = n - div;
                    if (b % div == 0) { 
                        long long current_lcm = lcm(div, b);
                        if (current_lcm < min_lcm) {
                            min_lcm = current_lcm;
                            a_ans = div;
                            b_ans = b;
                        }
                    }
                }
            }
        }
 
        cout << a_ans << " " << b_ans << endl;
    }
    
}