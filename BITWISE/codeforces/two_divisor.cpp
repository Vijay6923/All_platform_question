#include <bits/stdc++.h>
using namespace std;
int gcd_array(vector<int>& arr) {
    int ans = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        ans = __gcd(ans, arr[i]);
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int g = gcd_array(arr);
        if (g == 1) {
            cout << 0 << endl;
        }
        else if (__gcd(g, n) == 1) {
            cout << 1 << endl;
        }
        else if (__gcd(g, n - 1) == 1) {
            cout << 2 << endl;
        }
        else {
            cout << 3 << endl;
        }
    }
    return 0;
}
