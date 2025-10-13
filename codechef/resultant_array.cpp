#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> res;
        string prev = words[0];
        sort(prev.begin(), prev.end());
        res.push_back(words[0]);
        for (int i = 1; i < words.size(); i++) {
            string str = words[i];
            sort(str.begin(), str.end());
            if (prev != str) {
                res.push_back(words[i]);
                prev = str;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<string> words = {"abba","baba","bbaa","cd","cd"};
    vector<string> ans = sol.removeAnagrams(words);
    for (auto &w : ans) cout << w << " ";
    cout << endl;  // Output: abba cd
    return 0;
}
