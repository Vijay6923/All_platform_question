#include <bits/stdc++.h>
using namespace std;

int lcm(int x, int y) {
    return x / gcd(x, y) * y;
}

vector<int> replaceNonCoprimes(vector<int>& nums) {
    vector<int> st;
    for (int x : nums) {
        int cur = x;
        while (!st.empty()) {
            int g = gcd(st.back(), cur);
            if (g == 1) break;
            cur = lcm(st.back(), cur);
            st.pop_back();
        }
        st.push_back(cur);
    }
    return st;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = replaceNonCoprimes(nums);

    cout << "Array after replacing non-coprimes: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
