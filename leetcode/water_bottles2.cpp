#include <bits/stdc++.h>
using namespace std;

int maxBottlesDrunk(int numBottles, int numExchange) {
    int eb = numBottles;  // empty bottles
    int x = numExchange;  // current exchange rate
    int ans = numBottles; // total bottles drunk initially

    while (eb >= x) {
        eb -= x;   // spend bottles for exchange
        eb++;      // gain 1 new bottle
        ans++;     // drink it
        x++;       // exchange rate increases
    }
    return ans;
}

int main() {
    int numBottles, numExchange;
    cout << "Enter number of bottles: ";
    cin >> numBottles;
    cout << "Enter initial exchange rate: ";
    cin >> numExchange;

    cout << "Maximum bottles that can be drunk: "
         << maxBottlesDrunk(numBottles, numExchange) << endl;

    return 0;
}
