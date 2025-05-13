#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bitString(ll a,ll b,ll MOD){
    ll res=1;
    while(b>0){
        if(b&1){
            res=(res*a)%MOD;
        }
        a=(a*a)%MOD;
        b>>=1;
    }
    return res;
}
int main(){
    ll n;
    cin>>n;
    const ll MOD = 1e9 + 7;
    ll ans1=bitString(2,n,MOD);
    cout<<ans1<<endl;
}