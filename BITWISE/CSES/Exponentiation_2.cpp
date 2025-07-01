#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
ll bin_exp(ll a,ll b,int M){
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
        ll a,b,c;
        cin>>a>>b>>c;
        ll ans=bin_exp(a,bin_exp(b,c,M-1),M);
        cout<<ans<<endl;

       
    }
}