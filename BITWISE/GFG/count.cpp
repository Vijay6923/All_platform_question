#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;

    for (int i = 0; (1 << i) <= n; i++) {
        int total_pairs = (n + 1) / (1 << (i + 1));
        count += total_pairs * (1 << i);

        int remainder = (n + 1) % (1 << (i + 1));
        count += max(0, remainder - (1 << i));
    }

    return count;
}

int main() {
    int n = 10;
    cout << "Total set bits from 1 to " << n << " = " << countSetBits(n) << endl;
    return 0;
}