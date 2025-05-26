#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>> s;
        int t = stoi(s);
        bool flag = false;
        for (int i = 0; i <= 100; ++i) {
            if (i * i == t){
                for (int a = 0; a<= i; ++a) {
                    int b = i - a;
                    cout << a <<" "<< b << endl;
                    flag = true;
                    break;
                }
                break;
            }
        }
 
        if (!flag) {
            cout<< -1<< endl;
        }
    }
}