#include<bits/stdc++.h>
using namespace std;
int commonFactors(int a, int b) {
    int c=0;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0) c++;
    }
    return c;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<commonFactors(a,b)<<endl;

}