#include <bits/stdc++.h>
using namespace std;

class RecentCounter {
    queue<int> q;
public:
    RecentCounter() = default;
    
    int ping(int t) {
        q.push(t);
        while (!q.empty() && q.front() < t - 3000)
            q.pop();
        return static_cast<int>(q.size());
    }
};

int main() {
    RecentCounter* obj = new RecentCounter();
    cout << obj->ping(1) << endl;     // Output: 1
    cout << obj->ping(100) << endl;   // Output: 2
    cout << obj->ping(3001) << endl;  // Output: 3
    cout << obj->ping(3002) << endl;  // Output: 3
    delete obj;
    return 0;
}
