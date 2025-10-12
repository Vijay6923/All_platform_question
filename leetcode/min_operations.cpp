#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++) {
            int moves = 0;
            for (int j = 0; j < n; j++) {
                if (boxes[j] == '1') {
                    moves += abs(i - j);
                }
            }
            ans[i] = moves;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    string boxes = "110";
    vector<int> res = sol.minOperations(boxes);
    for (int x : res) cout << x << " ";
    cout << endl;  // Output: 1 1 3
    return 0;
}
