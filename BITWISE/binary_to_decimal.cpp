#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    int n = str.size();
    int result = 0;
    for (int i = n - 1; i >= 0; i--) {
        char ch = str[i];
        int num = ch - '0';
        result += num * (1 << (n - i - 1));
    }
    
    cout << result << endl;  
    return 0;
}