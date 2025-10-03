#include <bits/stdc++.h>
using namespace std;

int maxContainers(int n, int w, int maxWeight) {
    int d = maxWeight / w;     // how many containers maxWeight can handle
    return min(d, n * n);      // limited by total available containers
}

int main() {
    int n, w, maxWeight;
    cout << "Enter n (containers per row): ";
    cin >> n;
    cout << "Enter weight per container: ";
    cin >> w;
    cout << "Enter maximum weight capacity: ";
    cin >> maxWeight;

    cout << "Maximum containers that can be carried: "
         << maxContainers(n, w, maxWeight) << endl;

    return 0;
}
