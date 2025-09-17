#include <bits/stdc++.h>
using namespace std;

int sumOfTheDigitsOfHarshadNumber(int x) {
    int sum = 0;
    int temp = x;
    while (x > 0) {
        int r = x % 10;
        sum += r;
        x = x / 10;
    }
    if (temp % sum == 0) {
        return sum;
    } else {
        return -1;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = sumOfTheDigitsOfHarshadNumber(n);

    if (result != -1) {
        cout << n << " is a Harshad number. Sum of digits = " << result << endl;
    } else {
        cout << n << " is NOT a Harshad number." << endl;
    }

    return 0;
}
