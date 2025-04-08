#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> occ;
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            occ[x]++;
        }
        
        if (occ.size() >= 3) {
            cout << "No" << endl;
        } else {
            if (abs(occ.begin()->second - occ.rbegin()->second) <= 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    
}
