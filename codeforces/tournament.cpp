#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,j,k;
        cin>>n>>j>>k;
        --j; 
        vector<int>a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(k>1){
            cout << "YES\n";
        }
        else {
            int mx = *max_element(a.begin(), a.end());
            if(a[j]==mx){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
            
        }
    }
    
}