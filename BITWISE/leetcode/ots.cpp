#include <iostream>
#include <string>
using namespace std;
    int possibleStringCount(string word) {
        int n = word.size(), ans = 1;
        for (int i = 1; i < n; ++i) {
            if (word[i - 1] == word[i]) {
                ++ans;
            }
        }
        return ans;
    }


int main() {
    string word;
    cout << "Enter a string: ";
    cin >> word;
    int result =possibleStringCount(word);
    cout << "Possible string count: " << result << endl;
    return 0;
}
