#include<bits/stdc++.h>
using namespace std;
int smallestEvenMultiple(int n) {
    int ans=(2*n)/__gcd(2,n);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<smallestEvenMultiple(n)<<endl;

}