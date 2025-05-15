#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char buff;
        cin.get(buff);
        string a;
        getline(cin, a); 
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == '*') {
                if (j + 1 < n && a[j + 1] == '*') {
                    break;
                }
            }
            if (a[j] == '@') {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}