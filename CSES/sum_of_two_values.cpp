#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int x;
    cin >> n >> x;
    vector< int> arr(n);
    for( int  i = 0; i < n; i++) {
        cin >> arr[i];
    }
    unordered_map< int, int >m; 
    m.reserve(2*n);
    m.max_load_factor(0.7);
    for( int i = 0; i < n; i++) {
        int  rem = x - arr[i];
        if(m.find(rem) != m.end()) {
            cout << m[rem] + 1 << " " << i + 1 << endl;
            return 0;
        }
        m[arr[i]] = i; 
    }
    cout << "IMPOSSIBLE" << endl;
}
