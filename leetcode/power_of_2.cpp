#include<bits/stdc++.h>
using namespace std;
bool solve(int n){
    if(n==INT_MIN) return false;
    int a=__builtin_popcount(n);
    if(a==1) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
}