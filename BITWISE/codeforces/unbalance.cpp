#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count0 = 0, count1 = 0;
    for (char c : s) {
        if (c == '0') count0++;
        else count1++;
    }
    if (count0 != count1) {
        cout << 1 << endl;
        cout << s << endl;
    } else {
        for (int i = 1; i < n; ++i) {
            string left = s.substr(0, i);
            string right = s.substr(i);

            int left0 = count(left.begin(), left.end(), '0');
            int left1 = i - left0;  

            int right0 = count0 - left0;
            int right1 = count1 - left1;

            if (left0 != left1 && right0 != right1) {
                cout << 2 << endl;
                cout << left << " " << right << endl;
                break;
            }
        }
    }

    return 0;
}