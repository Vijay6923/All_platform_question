#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int ans=a^b;
    cout<<__builtin_popcount(ans)<<endl;
}