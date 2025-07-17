#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
        if (n % 4 != 0)
            return true;
        else
            return false;
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    
    if (obj.canWinNim(n))
        cout << "You can win." << endl;
    else
        cout << "You will lose." << endl;

    return 0;
}
