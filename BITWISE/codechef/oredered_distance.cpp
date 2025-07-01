#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>x(n),y(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=0;i<n;i++){
            cin>>y[i];
        }
        bool flag=false;
        for(int i=0;i<n;i++){
            int pivot = x[i];
            vector<pair<int, int>>l;
            
            for(int j = 0;j<n;j++){
                l.push_back({abs(x[j]-pivot),x[j]});
            }
            sort(l.begin(), l.end());
            vector<int> yf(n);
            for(int j=0;j<n;j++){
                yf[j]=l[j].second;
            }
            if(yf==y){
                cout<<i+1<<endl;  
                flag=true;
                break;
            }
        }
        
        if(!flag) {
            cout<<-1<<endl;  
        }
    }
    
}
