#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int g = arr[0];
        for (int i = 1; i < n; i++) {
            g = __gcd(g, arr[i]); 
        }
 
        bool flag = true;
        for (int x : arr) {
            if (x != g) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "No"<<endl;
            continue; 
        }
        bool found = false;
        for (int i = 0; i < n; ++i) {
            int gcd = 0;
            bool first = true;
            for (int j = 0; j < n; ++j) {
                if (j != i) {
                    if (first) {
                        gcd = arr[j];
                        first = false;
                    } else {
                        gcd = __gcd(gcd, arr[j]);
                    }
                }
            }
            if (gcd != arr[i]) {
                cout << "Yes"<<endl;
                vector<int> res(n, 2);
                res[i] = 1;
                for (int x : res) cout << x << ' ';
                cout << endl;
                found = true;
                break;
            }
        }
 
        if (!found) {
            cout << "No"<<endl;
        }
    }
    
}