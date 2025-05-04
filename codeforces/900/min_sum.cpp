#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        ll mn_sum=(k*(1+k))/2;
        ll mx_sum=(n*(n+1))/2-((n-k)*(n-k+1))/2;
        if(x>=mn_sum && x<=mx_sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
}