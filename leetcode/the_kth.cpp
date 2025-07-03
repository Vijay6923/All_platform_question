#include <iostream>
#include <bit> // Only needed for C++20 popcount

using namespace std;

class Solution {
public:
    // Version for C++20 and later (comment the manual version if you use this)
    char kthCharacter(int k) {
        return 'a' + popcount((unsigned int)(k - 1));
    }

    // Manual popcount version (for C++17 or earlier)
    int popcount(unsigned int x) {
        int count = 0;
        while (x) {
            count += x & 1;
            x >>= 1;
        }
        return count;
    }
};

int main() {
    Solution sol;
    int k;
    cout << "Enter k: ";
    cin >> k;
    cout << "k-th character: " << sol.kthCharacter(k) << endl;
    return 0;
}
