#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string n;
        cin >> n;
        
        int len = n.length();
        int removed_digits = 0;
        
        // Remove leading zeros
        int i = 0;
        while (i < len && n[i] == '0') {
            i++;
            removed_digits++;
        }
        
        // We want to keep the first non-zero digit and remove all other digits after it.
        bool found_first_non_zero = false;
        for (int j = i; j < len; j++) {
            if (n[j] != '0') {
                if (!found_first_non_zero) {
                    found_first_non_zero = true;  // Keep the first non-zero digit
                } else {
                    // Remove all digits after the first non-zero digit
                    removed_digits++;
                }
            } else {
                // Remove zeros
                removed_digits++;
            }
        }
        
        cout << removed_digits << endl;
    }

    return 0;
}
