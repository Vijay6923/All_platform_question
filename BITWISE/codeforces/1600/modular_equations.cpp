#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll a,b;
    cin>>a>>b;
    ll count=0;
    if(a<b){
        cout<<0<<endl;
    }
    else if(a==b){
        cout<<"infinity"<<endl;
    }
    else{
        ll n=a-b;
        for(ll i=1;i*i<=n;i++){
            if(n%i==0){
                if(i>b)count++;
                if(n/i != i && n/i > b)count++; 
            }
        }
        cout<<count<<endl;
    }
    
}