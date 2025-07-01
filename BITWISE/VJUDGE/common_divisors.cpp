#include<bits/stdc++.h>
using namespace std;
long long countdiv(long long n){
    long long count=0;
    for(long long i=1;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
            if(n/i!=i){
                count++;
            }
        }
    }
    return count;
}
int main(){
    long long n;
    cin>>n;
    vector<long long >arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long gcd=arr[0];
    for(long long i=1;i<n;i++){
        gcd=__gcd(gcd,arr[i]);
    }
    long long ans=countdiv(gcd);
    cout<<ans<<endl;
    
}