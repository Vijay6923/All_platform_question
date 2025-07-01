#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans =0;
        bool flag= false;
        for (int i=0;i<s.size()-1;++i) {
            if (s[i]=='(')ans++;
            else ans--;
            if(ans == 0){
                flag =true;
                break;
            }
        }
        if (flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
}