#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int>arr(n);
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       int ans=0;
       for(int i=0;i<n;i++){
           ans ^=arr[i];
       }
       if(ans==0){
           cout<<0<<endl;
           return 0;
       }
       else{
           if(n%2==1){
               cout<<ans<<endl;
           }
           else{
               cout<<-1<<endl;
           }
       }
    }
}