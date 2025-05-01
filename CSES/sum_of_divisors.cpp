#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
int main(){
    long long n;
    cin>>n;
    long long ans=0;
    for(long long l=1,r;l<=n;l=r+1){
        long long q=n/l;
         r=n/q;
        long long count=r-l+1;
        ll sum = ((l + r) % MOD) * (count % MOD) % MOD;
        sum = (sum * ((MOD + 1) / 2)) % MOD;
        ll total = (q % MOD) * sum % MOD;
        ans = (ans + total) % MOD;
    }
    cout<<ans<<endl;
}