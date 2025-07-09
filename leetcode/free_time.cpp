#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size();
        vector<pair<int, int>> vp(n);
        for (int i = 0; i < n; i++) {
            vp[i] = {startTime[i], endTime[i]};
        }
        sort(vp.begin(), vp.end());
        
        vector<int> freeGaps;
        freeGaps.push_back(vp[0].first);  
        for (int i = 0; i < n - 1; i++) {
            freeGaps.push_back(vp[i + 1].first - vp[i].second);
        }
        freeGaps.push_back(eventTime - vp.back().second);  
        int maxSum = 0, sum = 0;
        int len = freeGaps.size();
        k++; 
        for (int i = 0; i < min(len, k); i++) {
            sum += freeGaps[i];
        }
        maxSum = sum;
        for (int i = k; i < len; i++) {
            sum -= freeGaps[i - k];
            sum += freeGaps[i];
            maxSum = max(maxSum, sum);
        }

        return maxSum;
    }
};

int main() {
    Solution sol;
    int eventTime = 30;
    int k = 2;
    vector<int> startTime = {2, 8, 15};
    vector<int> endTime = {5, 12, 18};

    int result = sol.maxFreeTime(eventTime, k, startTime, endTime);
    cout << "Maximum Free Time: " << result << endl;
    return 0;
}