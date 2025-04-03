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
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==x){
            count++;
        }
        if(m.find(sum-x)!=m.end()){
            count+=m[sum-x];
            

        }
        m[sum]++;
            
        
    }
    
    cout<<count<<endl;
}