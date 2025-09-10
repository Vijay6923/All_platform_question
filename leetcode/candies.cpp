#include <bits/stdc++.h>
using namespace std;

vector<int> distributeCandies(int candies, int num_people) {
    int c = 1, i = 0;
    vector<int> result(num_people, 0);

    while (candies > 0) {
        int give = min(c, candies);
        result[i] += give;
        candies -= give;

        c++;
        i = (i + 1) % num_people;
    }

    return result;
}

int main() {
    int candies, num_people;
    cout << "Enter number of candies: ";
    cin >> candies;
    cout << "Enter number of people: ";
    cin >> num_people;

    vector<int> result = distributeCandies(candies, num_people);

    cout << "Final distribution of candies: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
