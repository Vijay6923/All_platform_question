#include<bits/stdc++.h>
using namespace std;
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>>ans;
        if(n<=2) return ans;
        vector<bool>s(n+1,true);
        s[0] =s[1]=false;
        for(int i=2;i*i<=n;i++){
            if(s[i]==true){
                for(int j=i*i;j<=n;j+=i){
                    s[j]=false;
                }
            }
        }
        for(int i=2;i<=n/2;i++){
            int rem = n - i;
            if(s[i] && s[rem]) {
                ans.push_back({i, rem});
            }
        }
        return ans;

        
    }
    int main(){
        int n;
        cin>>n;
        vector<vector<int>>final_ans=findPrimePairs(n);
        for(auto &x: final_ans){
            cout<<x[0]<<" "<<x[1]<<endl;;
        }

    }
