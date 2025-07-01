#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        string s, t;
        cin >> s >> t;
        unordered_set<char> s_chars(s.begin(), s.end());
        unordered_set<char> t_chars(t.begin(), t.end());
        bool canMatch = false;
        for (char c : s_chars) {
            if (t_chars.count(c)) {
                canMatch = true;
                break;
            }
        }
        if (canMatch) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}