#include <bits/stdc++.h>
using namespace std;

vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
    vector<int> ans;
    map<int, int> mp;

    // Store all friends in a map
    for (int i = 0; i < friends.size(); i++) {
        mp[friends[i]]++;
    }

    // Check order list and keep only friends
    for (int i = 0; i < order.size(); i++) {
        if (mp.find(order[i]) != mp.end()) {
            ans.push_back(order[i]);
        }
    }

    return ans;
}

int main() {
    int n, m;
    cout << "Enter number of elements in order: ";
    cin >> n;

    vector<int> order(n);
    cout << "Enter order elements: ";
    for (int i = 0; i < n; i++) {
        cin >> order[i];
    }

    cout << "Enter number of friends: ";
    cin >> m;

    vector<int> friends(m);
    cout << "Enter friends elements: ";
    for (int i = 0; i < m; i++) {
        cin >> friends[i];
    }

    vector<int> result = recoverOrder(order, friends);

    cout << "Recovered order: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
