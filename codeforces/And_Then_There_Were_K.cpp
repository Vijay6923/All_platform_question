#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int temp;
        while(n>0){
            temp=n-1;
            n= (n&(n-1));
        }
        cout<<temp<<'\n';
         
        
    }
   
    
}