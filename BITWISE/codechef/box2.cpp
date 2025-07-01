#include<bits/stdc++.h>  
using namespace std;
int main() {
    int t;
    cin>>t;  
    while(t--){
        int x, y, k;
        cin>>x>>y>>k;  
        int ad=abs(x-y); 
        if(ad==k){
            cout<<0<<endl;  
        }else{
            if((ad-k)%2!=0){
                cout<<-1<<endl;  
            }else{
                int ans=abs(ad-k)/2;
                cout<<ans<<endl;
            }
        }
    }
    
    
}
