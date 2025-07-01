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
        int ans=INT_MAX;
        bool flag =false;
        for(int i=0;i<n-1;i++){
            int a=arr[i+1]-arr[i];
            if(a<0){
                flag=true;
                break;

            }
            else{
                ans=min(ans,a);
            }
        }
        if(flag==true){
            cout<<0<<endl;
        }
        else{
            cout<<ans/2 +1<<endl;

        }
        
        
    }
}