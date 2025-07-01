#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    unordered_map<long long, int>m; 

    for(int i = 0; i < n; i++) {
        long long rem = x - arr[i];
        if(m.find(rem) != m.end()) {
            cout << m[rem] + 1 << " " << i + 1 << endl;
            return 0;
        }
        m[arr[i]] = i; 
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
