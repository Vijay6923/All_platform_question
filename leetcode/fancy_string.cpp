#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeFancyString(string s) {
        int n = s.length();
        string res = "";
        for (int i = 0; i < n; ++i) {
            int len = res.length();
            if (len >= 2 && res[len - 1] == s[i] && res[len - 2] == s[i]) {
                continue;
            }
            res += s[i];
        }
        return res;
    }
};

int main() {
    Solution obj;
    string s;
    cin >> s;
    cout << obj.makeFancyString(s) << endl;
    return 0;
}
