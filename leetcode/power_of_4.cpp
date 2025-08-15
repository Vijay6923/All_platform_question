#include<bits/stdc++.h>
using namespace std;
bool isPowerOfFour(int n) {
    if(n==INT_MIN) return false;
    int a=__builtin_popcount(n);
    if(a==1 && (n-1)%3==0){
        return true;
    }
    else{
        return false;
    }
        
}
int main(){
    int n;
    cin>>n;
    cout<<isPowerOfFour(n)<<endl;

}