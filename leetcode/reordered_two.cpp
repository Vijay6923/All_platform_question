#include<bits/stdc++.h>
using namespace std;
bool reorderedPowerOf2(int n) {
    string n1 = to_string(n);
    sort(n1.begin(),n1.end());
    for(int i = 0; i < 30 ; i++){
        string n2 = to_string(1 << i);
        sort(n2.begin(), n2.end());
        if(n1 == n2) return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    cout<<reorderedPowerOf2(n)<<endl;


}