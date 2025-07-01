#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
ll bin_exp(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b&1){
            res=(res*a)%M;
        }
        a=(a*a)%M;
        b>>=1;

    }
    return res;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll ans=bin_exp(a,b);
        cout<<ans<<endl;

       
    }
}