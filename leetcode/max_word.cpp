#include <bits/stdc++.h>
using namespace std;

int canBeTypedWords(string text, string brokenLetters) {
    vector<bool> broken(26, false);
    for (char c : brokenLetters) {
        broken[c - 'a'] = true;
    }

    int count = 0;
    istringstream iss(text);
    string word;
    while (iss >> word) {
        bool canType = true;
        for (char c : word) {
            if (broken[c - 'a']) {
                canType = false;
                break;
            }
        }
        if (canType) count++;
    }
    return count;
}

int main() {
    string text, brokenLetters;
    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter broken letters: ";
    cin >> brokenLetters;

    cout << "Number of words that can be typed: " << canBeTypedWords(text, brokenLetters) << endl;

    return 0;
}
