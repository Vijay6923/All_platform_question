#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long x, n;
        cin >> x >> n;
        long long D;
        if (n % 4 == 0)
            D = 0;
        else if (n % 4 == 1)
            D = -n;
        else if (n % 4 == 2)
            D = 1;
        else 
            D = n + 1;
        if (x % 2 == 0)
            cout << x + D << endl;
        else
            cout << x- D << endl;
    }
   
}
