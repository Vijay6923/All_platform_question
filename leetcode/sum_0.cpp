#include <bits/stdc++.h>
using namespace std;

vector<int> sumZero(int n) {
    vector<int> a;
    if (n % 2 != 0) {
        a.push_back(0);
    }

    for (int i = 1; i <= n / 2; i++) {
        a.push_back(i);
        a.push_back(-i);
    }
    return a;  
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> result = sumZero(n);

    cout << "Array of " << n << " integers summing to 0:\n";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
