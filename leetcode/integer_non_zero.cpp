#include <bits/stdc++.h>
using namespace std;

bool noZero(int x) {
    while (x > 0) {
        if (x % 10 == 0) 
            return false;
        x /= 10;
    }
    return true;
}

vector<int> getNoZeroIntegers(int n) {
    for (int a = 1; a < n; a++) {
        int b = n - a;
        if (noZero(a) && noZero(b)) {
            return {a, b};
        }
    }
    return {};
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> result = getNoZeroIntegers(n);

    if (!result.empty()) {
        cout << "Two No-Zero Integers that sum to " << n << " are: ";
        cout << result[0] << " + " << result[1] << " = " << n << endl;
    } else {
        cout << "No valid pair found." << endl;
    }

    return 0;
}
