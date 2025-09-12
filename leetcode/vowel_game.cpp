#include <bits/stdc++.h>
using namespace std;

bool doesAliceWin(string s) {
    int vowelCount = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        }
    }
    return vowelCount > 0;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (doesAliceWin(s)) {
        cout << "Alice wins (string contains at least one vowel)." << endl;
    } else {
        cout << "Alice loses (no vowels found)." << endl;
    }

    return 0;
}
