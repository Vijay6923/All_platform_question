#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size(), n = needle.size();
        for (int i = 0; i <= m - n; i++) {
            int j = 0;
            for (; j < n; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == n) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    string haystack = "hello";
    string needle = "ll";
    
    int result = sol.strStr(haystack, needle);
    cout << "Index of first occurrence: " << result << endl;

    return 0;
}
