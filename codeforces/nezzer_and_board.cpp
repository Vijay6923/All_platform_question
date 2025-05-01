#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long >arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        long long gcd=0;
        for(long long i=1;i<n;i++){
            gcd=__gcd(arr[i]-arr[0], gcd);
            
        }
        if((k-arr[0])%gcd==0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
}
