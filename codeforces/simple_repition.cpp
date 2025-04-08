#include <bits/stdc++.h>
using namespace std;
bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    long long mx_d = sqrt(n) + 1;
    for (long long i=3;i< mx_d;i+=2) {
        if(n%i==0) return false;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x,k;
        cin>>x>>k;
        if(k==1){
            if(is_prime(x)){
                cout<<"YES"<<endl;
            } else{
                cout<<"NO"<<endl;
            }
        } else {
            if (x == 1) {
                if (k == 2) {
                    cout <<"YES" <<endl;
                } else {
                    cout << "NO" << endl;
                }
            } else {
                if (x % 2 == 0 || x % 5 == 0) {
                    cout << "NO" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
        }
    }
}
