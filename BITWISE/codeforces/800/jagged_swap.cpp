#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<mn){
                mn=arr[i];
            }
        }
        if(mn==arr[0]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}