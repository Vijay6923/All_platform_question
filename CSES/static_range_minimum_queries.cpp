#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll>arr(n);
    for(ll i=1;i<=n;i++){
        cin>>arr[i];
        
    }
    for(ll i=1;i<=q;i++){
        ll a,b;
        cin>>a>>b;
        if(a==b){
            cout<<arr[a]<<endl;
            continue;
        }
        ll ans=LLONG_MAX;
        for(ll i=a;i<=b;i++){
            ans=min(ans,arr[i]);
        }
        cout<<ans<<endl;
    }
}