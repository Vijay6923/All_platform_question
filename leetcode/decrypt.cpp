#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n, 0);

        for (int i = 0; i < n; i++) {
            if (k > 0) {
                for (int j = 1; j <= k; j++) {
                    res[i] += code[(i + j) % n];
                }
            }
            else if (k < 0) {
                for (int j = 1; j <= abs(k); j++) {
                    res[i] += code[(i - j + n) % n];
                }
            }
            // if k == 0, res[i] stays 0
        }

        return res;
    }
};

int main() {
    vector<int> code = {5, 7, 1, 4};
    int k = 3;

    Solution sol;
    vector<int> result = sol.decrypt(code, k);

    cout << "Decrypted code: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}