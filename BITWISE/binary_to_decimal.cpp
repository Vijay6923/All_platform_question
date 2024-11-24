// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string str;
//     cin >> str;
//     int n = str.size();
//     long long  result = 0;
//     for (int i = n - 1; i >= 0; i--) {
//         char ch = str[i];
//         int num = ch - '0';
//         result += num * (1 << (n - i - 1));
//     }
    
//     cout << result << endl;  
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    const long long MOD = 998244353; 
    long long result = 0;
    long long num = 1;
    for (int i = str.size() - 1; i >= 0; i--) {
        if (str[i] == '1') {
            result = (result + num) % MOD; 
        }
        num = (num * 2) % MOD; 
    }

    cout << result << endl;
    return 0;
}
