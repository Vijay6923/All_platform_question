#include<bits/stdc++.h>
using namespace std;
vector<int> getRow(int rowIndex) {
        int n=rowIndex;
        vector<int>ans;
        
        long val=1;
        for(int i=0;i<=n;i++){
            ans.push_back(static_cast<int>(val));
            val = val * (n - i) / (i + 1);
        }
        return ans;
        
    }
int main(){
    int n;
    cin>>n;
    vector<int>res=getRow(n);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}