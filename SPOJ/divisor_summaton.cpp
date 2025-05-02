#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        ll sum=1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                sum+=i;
                if(i!=n/i && n/i!=n){
                    sum+=n/i;
                }
            }
        }
        cout<<sum<<endl;
    }
    
}