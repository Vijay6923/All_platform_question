#include<bits/stdc++.h>
using namespace std;
int subarrayBitwiseORs(vector<int>& arr) {
    int n=arr.size();
    unordered_set<int> ans, cur, next;
    for (int x : arr) {
        next.clear();
        next.insert(x);
        for (int i : cur) {
            next.insert(i | x);
        }
        cur = next;
        ans.insert(cur.begin(), cur.end());
    }
    return ans.size();
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<subarrayBitwiseORs(arr)<<endl;
}