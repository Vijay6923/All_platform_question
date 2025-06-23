#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        // Calculate number of groups needed and initialize with fill characters
        vector<string> res((s.size() + k - 1) / k, string(k, fill));
        for (int i = 0; i < s.size(); ++i)
            res[i / k][i % k] = s[i];
        return res;
    }
};

int main() {
    string s;
    int k;
    char fill;

    // Input string, group size, and fill character
    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the group size (k): ";
    cin >> k;
    cout << "Enter the fill character: ";
    cin >> fill;

    Solution sol;
    vector<string> result = sol.divideString(s, k, fill);

    // Output the result
    cout << "Divided string groups:" << endl;
    for (const string& group : result) {
        cout << group << endl;
    }

    return 0;
}