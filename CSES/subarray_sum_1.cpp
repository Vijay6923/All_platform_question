#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        sum=arr[i];
        if(sum==x){
            count++;
        }
        for(int j=i+1;j<n;j++){
            sum=sum+arr[j];
            if(sum==x){
                count++;
            }
        }
    }
    cout<<count<<endl;
}