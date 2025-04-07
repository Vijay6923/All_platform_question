#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<arr[0]<<endl;
        return 0;
    }
    else if(n==2){
        if(arr[0]>arr[1]){
            cout<<arr[0]<<endl;
            return 0;
        }
        else{
            cout<<arr[1]<<endl;
            return 0;
        }
    }
    else{
        long long sum=0;
        long long ans=-1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>ans){
                ans=sum;

            } 
            if(sum<0) sum=0;

            
        }
        cout<<ans<<endl;

    }
    
}