#include <bits/stdc++.h>
using namespace std;

int numberOfChild(int n, int k) {
    int ans = 0;
    bool forward = true;
    for (int i = 0; i < k; i++) {
        if (forward) {
            ans++;
            if (ans == n - 1) forward = false;
        } 
        else {
            ans--;
            if (ans == 0) forward = true;
        }
    }
    return ans;
}

int main() {
    int n, k;
    cout << "Enter number of children: ";
    cin >> n;
    cout << "Enter number of passes: ";
    cin >> k;

    cout << "Child position after " << k << " passes: " << numberOfChild(n, k) << endl;

    return 0;
}
