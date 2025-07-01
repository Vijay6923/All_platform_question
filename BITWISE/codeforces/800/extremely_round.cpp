#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count= 0;
        for(int i=1;i<=9;i++){
            int x=i;
            while(x<=n){
                count++;
                x *=10;
            }
        }
        cout<<count<<endl;;
    }
}