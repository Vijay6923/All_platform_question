#include<bits/stdc++.h>
using namespace std;
vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int a=__builtin_popcount(i);
            ans.push_back(a);
        }
        return ans;
        
    }
    int main(){
        int n;
        cin>>n;
        vector<int>arr=countBits(n);
        for(int i=0;i<=n;i++){
            cout<<arr[i]<<endl;
        }


    }