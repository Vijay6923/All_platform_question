#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bin_exp(ll a,ll b){
    if(b==0){
        return 1;
    }
    ll res=bin_exp(a,b/2);
    if(b%2!=0){
         return res*res*a;
    }
    else {
        return res*res;
    }
}
ll bin_exp_iter(ll a,ll b){
    int res=1;
    while(b>0){
        if(b&1){
            res=res*a;
        }
        a=a*a;
        b>>=1;
    }
    return res;
}
int main(){
    ll a,b;
    cin>>a>>b;
    ll ans=bin_exp(a,b);
    ll ans1=bin_exp_iter(a,b);
    cout<<ans<<endl;
    cout<<ans1<<endl;
}