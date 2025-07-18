#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int s = 0, ans = 0;
        for (int i = 0; i < gain.size(); i++) {
            s += gain[i];
            ans = max(ans, s);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> gain = {-5, 1, 5, 0, -7};
    cout << sol.largestAltitude(gain) << endl;
    return 0;
}
