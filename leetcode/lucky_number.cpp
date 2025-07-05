#include <iostream>
#include <vector>
#include <map>
#include <algorithm> // for max()

using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        map<int, int> m;

        // Count frequency of each number
        for (int i = 0; i < n; i++) {
            m[arr[i]]++;
        }

        int ans = -1;

        // Check for lucky numbers
        for (auto x : m) {
            if (x.first == x.second) {
                ans = max(ans, x.first); // Store the largest lucky number
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> arr = {1, 2, 2, 3, 3, 3};

    int result = sol.findLucky(arr);

    cout << "Output: " << result << endl;  // Expected output: 3

    return 0;
}
