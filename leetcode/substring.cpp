#include <bits/stdc++.h>
using namespace std;

int countKConstraintSubstrings(string s, int k) {
    int n = s.size();  
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int c0 = 0;   // count of 0s
        int c1 = 0;   // count of 1s

        for (int j = i; j < n; j++) {
            if (s[j] == '0') {
                c0++;
            } else {
                c1++;
            }

            if (c0 <= k || c1 <= k) {
                ans++;
            } else {
                break;
            }
        }
    }

    return ans;
}

int main() {
    string s;
    int k;

    cout << "Enter binary string: ";
    cin >> s;

    cout << "Enter value of k: ";
    cin >> k;

    cout << "Number of K-constrained substrings: " 
         << countKConstraintSubstrings(s, k) << endl;

    return 0;
}
