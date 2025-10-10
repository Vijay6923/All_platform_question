#include <bits/stdc++.h>
using namespace std;

int totalNumbers(vector<int>& digits) {
    int n = digits.size();
    sort(digits.begin(), digits.end());
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (digits[i] == 0 || (i > 0 && digits[i] == digits[i - 1])) {
            continue; // skip leading zero or duplicate first digit
        }
        for (int j = 0; j < n; j++) {
            if (j == i || (j > 0 && i != j - 1 && digits[j - 1] == digits[j])) {
                continue; // skip duplicate or same index
            }
            for (int k = 0; k < n; k++) {
                if (k == i || k == j || (k > 0 && i != k - 1 && j != k - 1 && digits[k - 1] == digits[k])) {
                    continue; // skip duplicate or same index
                }
                if (digits[k] % 2 == 0) {
                    count++; // count only if last digit is even
                }
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter number of digits: ";
    cin >> n;

    vector<int> digits(n);
    cout << "Enter digits: ";
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    int result = totalNumbers(digits);
    cout << "Total valid 3-digit numbers with even last digit: " << result << endl;

    return 0;
}
