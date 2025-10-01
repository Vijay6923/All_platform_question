#include <bits/stdc++.h>
using namespace std;

int numWaterBottles(int numBottles, int numExchange) {
    int total = numBottles;
    while (numBottles >= numExchange) {
        int newBottles = numBottles / numExchange;
        int leftover = numBottles % numExchange;
        total += newBottles;
        numBottles = newBottles + leftover;
    }
    return total;
}

int main() {
    int numBottles, numExchange;
    cout << "Enter number of bottles: ";
    cin >> numBottles;
    cout << "Enter exchange rate: ";
    cin >> numExchange;

    cout << "Maximum bottles that can be drunk: " 
         << numWaterBottles(numBottles, numExchange) << endl;

    return 0;
}
