#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        long long d=a%b;
        if(d==0){
            cout<<0<<endl;
        }
        else{
            int r=a/b;
            r=r+1;
            b=b*r;
            cout<<b-a<<endl;
        }
        
    }
}