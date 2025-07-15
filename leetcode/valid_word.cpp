#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string word) {
        int n = word.length();
        if (n < 3) return false;

        bool hasVowel = false;
        bool hasConsonant = false;

        for (int i = 0; i < n; i++) {
            char c = word[i];
            if (!isalnum(c)) return false;

            if (isalpha(c)) {
                char lower = tolower(c);
                if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                    hasVowel = true;
                } else {
                    hasConsonant = true;
                }
            }
        }

        return hasVowel && hasConsonant;
    }
};

int main() {
    Solution sol;
    vector<string> testWords = {"abc", "a1e", "123", "AEi", "bcd", "aei", "a1@", "Ai3"};

    for (string word : testWords) {
        cout << word << " -> " << (sol.isValid(word) ? "Valid" : "Invalid") << endl;
    }

    return 0;
}
