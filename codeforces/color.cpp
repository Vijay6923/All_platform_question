#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int g=__gcd(a,b);
        if(g==1){
            cout<<"finite"<<endl;
        }
        else{
            cout<<"infinite"<<endl;
        }
        
    }
    
    
    
}