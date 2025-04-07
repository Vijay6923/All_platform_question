#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_set<int>s;
    s.reserve(200000);
    for(int x:arr){
        s.insert(x);
    }
    cout<<s.size();

}