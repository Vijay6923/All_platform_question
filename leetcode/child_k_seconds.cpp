#include <bits/stdc++.h>
using namespace std;

int numberOfChild(int n, int k) {
    int ans = 0;
    bool flag = true;
    for(int i = 0; i < k; i++) {
        if (flag) {
            ans++;
            if (ans == n - 1) flag = false;
        } 
        else {
            ans--;
            if (ans == 0) flag = true;
        }
    }
    return ans;
}

int main() {
    // leetcode submission 
    int n, k;
    cout << "Enter number of children: ";
    cin >> n;
    cout << "Enter number of passes: ";
    cin >> k;

    cout << "Child position after " << k << " passes: " << numberOfChild(n, k) << endl;

    return 0;
}
