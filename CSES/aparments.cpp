#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>app(n);
    for(ll i=0;i<n;i++){
        cin>>app[i];
    }
    vector<ll>apart(m);
    for(ll i=0;i<m;i++){
        cin>>apart[i];
    }
    sort(app.begin(),app.end());
    sort(apart.begin(),apart.end());
    ll ans=0;
    ll i=0;
    ll j=0;
    while(i<n && j<m){
        if(apart[j]<(app[i]-k)){
            j++;
        }
        else if(apart[j]>(app[i]+k)){
            i++;
        }
        else{
            ans++;
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
    

}