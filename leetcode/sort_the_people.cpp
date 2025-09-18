#include <bits/stdc++.h>
using namespace std;

vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    for (int i = 0; i < heights.size(); i++) {
        for (int j = i + 1; j < names.size(); j++) {
            if (heights[i] < heights[j]) {
                swap(heights[i], heights[j]);
                swap(names[i], names[j]);
            }
        }
    }
    return names;
}

int main() {
    int n;
    cout << "Enter number of people: ";
    cin >> n;

    vector<string> names(n);
    vector<int> heights(n);

    cout << "Enter names: ";
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    cout << "Enter heights: ";
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    vector<string> sorted = sortPeople(names, heights);

    cout << "Sorted people by height (descending): ";
    for (string name : sorted) {
        cout << name << " ";
    }
    cout << endl;

    return 0;
}
