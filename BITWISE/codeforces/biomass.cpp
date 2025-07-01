#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<int> odd, even;
    for (int num : arr) {
        if (num % 2 == 1) {
            odd.push_back(num);
        } else {
            even.push_back(num);
        }
    }
    int i = 0, j = 0;
    while (i < odd.size() && j < even.size()) {
        cout << odd[i++] << " " << even[j++] << " ";
    }
    while (i < odd.size()) {
        cout << odd[i++] << " ";
    }
    while (j < even.size()) {
        cout << even[j++] << " ";
    }

    cout << endl;

    return 0;
}