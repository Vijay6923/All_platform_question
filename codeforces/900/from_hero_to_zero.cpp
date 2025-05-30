#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll ans=0;
        while(n!=0){
            if(n%k==0){
                ans++;
                n/=k;
            }
            else{
                n--;
                ans++;
            }
        }
        cout<<ans<<endl;
        
    }
    
}