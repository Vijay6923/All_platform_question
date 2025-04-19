#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int k = 2; k < 30; ++k) {
            int denom = (1 << k) - 1; 
            if (n % denom == 0) {
                cout << n / denom << "\n";
                break;
            }
        }
    }
    
}