#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {         
    ll n;
    cin>>n;
    ll sum=0;
    if(n%2==0){
        sum=n/2;
    }
    else{
        sum=n/2-n;
    }
    cout<<sum<<endl;
    
 
    
}