#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x;
    cin>>n>>x;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum=0;
    long long count=0;
    unordered_map<long long,long long>m;
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