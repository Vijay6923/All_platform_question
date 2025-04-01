#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%2!=0 && k%2!=0){
            cout<<"yes"<<endl;
            
        }
        else if(n%2==0 && k%2!=0){
            cout<<"yes"<<endl;
        }
        else if(n%2!=0 && k%2==0){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
}