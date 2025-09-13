#include <bits/stdc++.h>
using namespace std;

int maxFreqSum(string s) {
    int n = s.size();
    int hash[26] = {0};

    // Count frequency of each letter
    for (int i = 0; i < n; i++) {
        hash[s[i] - 'a']++;
    }

    int vmax = 0, cmax = 0;

    // Check vowels (a=0, e=4, i=8, o=14, u=20)
    for (int i = 0; i < 26; i++) {
        if (i == 0 || i == 4 || i == 8 || i == 14 || i == 20) {
            vmax = max(vmax, hash[i]);
        } else {
            cmax = max(cmax, hash[i]);
        }
    }

    return vmax + cmax;
}

int main() {
    string s;
    cout << "Enter a lowercase string: ";
    cin >> s;

    cout << "Max frequency sum (vowel + consonant) = " << maxFreqSum(s) << endl;

    return 0;
}
