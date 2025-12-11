#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_set<int> s;
    s.reserve(n * 2);        // avoid rehashing
    s.max_load_factor(0.7);  // reduce collisions
    for(int x:arr){
        s.insert(x);
    }
    cout<<s.size()<<endl;
}