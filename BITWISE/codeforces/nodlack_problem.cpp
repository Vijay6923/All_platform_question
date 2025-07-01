#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if(n <= 1) return false;
    for(int  i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<bool>p(n+1,true);
    p[0]=p[1]=false;
    for(int i=2;i<=n;i++){
        if(p[i]==true){
            for(int j=i*i;j<=n;j+=i){
                p[j]=false;
            }
        }
    }
    vector<int>prime;
    for(int i=2;i<=n;i++){
        if(p[i]==true){
            prime.push_back(i);
        }
    }
    int count=0;
    for(int i=0;i<prime.size()-1;i++){
        int a=prime[i]+prime[i+1]+1;
        if(a<=n && isPrime(a)) count++;
        
    }
    if(count>=k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}