#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isFeasible(vector<ll>& A, vector<ll>& B, ll maxVal) {
    int N = A.size();
    ll supply = 0, capacity = 0;

    for (int i = 0; i < N; ++i) {
        ll need = maxVal - A[i];
        if (need < 0) return false;

        if (B[i] > need) {
            supply += B[i] - need;
        } else {
            capacity += (need - B[i]) / 2;
        }
    }
    return supply <= capacity;
}

ll minimizeMax(vector<ll>& A, vector<ll>& B) {
    ll low = *max_element(A.begin(), A.end());
    ll high = low;

    for (int i = 0; i < A.size(); ++i)
        high = max(high, A[i] + B[i]*2);  

    while (low < high) {
        ll mid = (low + high) / 2;
        if (isFeasible(A, B, mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<ll> A(N), B(N);

        for (int i = 0; i < N; ++i) cin >> A[i];
        for (int i = 0; i < N; ++i) cin >> B[i];

        cout << minimizeMax(A, B) << '\n';
    }

    return 0;
}