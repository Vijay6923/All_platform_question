#include <bits/stdc++.h>
using namespace std;
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> cards(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> cards[i];
        }
        sort(cards.begin(), cards.end()); 
        int score = 0;
        for (int i = 0; i < 2 * n; i += 2) {
            score += cards[i];
        }

        cout << score << endl;
    }
}

int main() {
    solve();
    return 0;
}