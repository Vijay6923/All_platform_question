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
    for(ll i=2;i<=n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    for(ll i=1;i<=q;i++){
        ll a,b;
        cin>>a>>b;
        
        cout<<arr[b]-arr[a-1]<<endl;
    }
}