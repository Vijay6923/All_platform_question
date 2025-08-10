#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int a=__builtin_popcountll(n);
        if(a>1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }

}