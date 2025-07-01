#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n;
    unordered_map<int, int> ai;
    for (int i = 0; i < n; i++) {
        int a, ap;
        cin >> a >> ap;
        ai[a] = ap; 
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int b, bp;
        cin >> b >> bp;
        if (ai.count(b)) {
            ai[b] = max(ai[b], bp);
        } else {
            ai[b] = bp;
        }
    }
    long long total_income = 0;
    for (const auto& [artifact, income] : ai) {
        total_income += income;
    }

    cout << total_income << endl;
    return 0;
}