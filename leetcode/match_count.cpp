#include <bits/stdc++.h>
using namespace std;

int numberOfMatches(int n) {
    return n - 1;
}

int main() {
    int n;
    cout << "Enter number of teams: ";
    cin >> n;

    cout << "Total matches played = " << numberOfMatches(n) << endl;
    return 0;
}
