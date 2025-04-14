#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 1, -1, 1};
int dy[4] = {-1, -1, 1, 1};
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin>>a>>b;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
 
        set<pair<int, int>> moves1, moves2;
 
        for (int i = 0; i < 4; i++) {
            moves1.insert({x1 + dx[i] * a, y1 + dy[i] * b});
            moves2.insert({x2 + dx[i] * a, y2 + dy[i] * b});
 
            moves1.insert({x1 + dx[i] * b, y1 + dy[i] * a});
            moves2.insert({x2 + dx[i] * b, y2 + dy[i] * a});
        }
 
        int ans = 0;
        for (auto p : moves1) {
            if (moves2.count(p)) {
                ans++;
            }
        }
 
        cout<<ans<<'\n';
    }
 
    return 0;