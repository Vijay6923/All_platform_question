#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int count=0;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
            ans=i;
            if(k==0){
                
                break;
            }
        }
        k--;
    }
    if(count<k){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    
        
            
        
    
}