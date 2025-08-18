#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        cout<<min(2 * m,min(a, m) +min(b, m) + c) <<endl;
        
    }
    
}