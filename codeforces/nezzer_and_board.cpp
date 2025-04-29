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
        long long gcd=arr[0];
        for(long long i=1;i<n;i++){
            gcd=__gcd(arr[0],arr[i]);
            
        }
        if(k%gcd==0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
