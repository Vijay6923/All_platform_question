#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum=n*(n+1)/2;
        ll power=1;
        while(power<=n){
            sum -= 2 * power;
            power*=2;
        }
        cout<<sum<<endl;
    }
}