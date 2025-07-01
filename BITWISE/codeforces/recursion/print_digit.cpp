#include <bits/stdc++.h>
using namespace std;
void printdigit(int n) {
    if (n < 10) {
        cout << n << " ";
        return;
    }
    printdigit(n / 10);
    cout << n % 10 << " ";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        printdigit(n);
        cout << endl;
    }
 
    return 0;
}