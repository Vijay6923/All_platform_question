#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a ,b;
        cin>>a>>b;
        long long g=gcd(a,b);
        long long l=(a*b)/g;
        cout<<l<<" "<<g<<endl;
    }
}