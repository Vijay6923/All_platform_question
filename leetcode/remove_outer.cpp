#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
    stack<char> st;
    string ans = "";
    int n = s.size();
    vector<int> temp(n, 1);  // mark characters to keep (1) or remove (0)

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            if (st.empty()) {
                temp[i] = 0;  // outermost '('
            }
            st.push('(');
        } else if (s[i] == ')') {
            st.pop();
            if (st.empty()) {
                temp[i] = 0;  // outermost ')'
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (temp[i] == 1) {
            ans += s[i];
        }
    }

    return ans;
}

int main() {
    string s;
    cout << "Enter a valid parentheses string: ";
    cin >> s;

    string result = removeOuterParentheses(s);
    cout << "String after removing outer parentheses: " << result << endl;

    return 0;
}
