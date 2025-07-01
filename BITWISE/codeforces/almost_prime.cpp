#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> primeFactors(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        if (primeFactors[i] == 0) {
            for (int j = i; j <= n; j += i) {
                primeFactors[j]++;
            }
        }
    }
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (primeFactors[i] == 2)
            count++;
    }

    cout << count << endl;
    
}