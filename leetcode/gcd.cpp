#include<bits/stdc++.h>
using namespace std;
int gcdOfOddEvenSums(int n) {
    return (n < 0) ? -n : n;
}
int main(){
    int n;
    cin>>n;
    cout<<gcdOfOddEvenSums(n)<<endl;

}