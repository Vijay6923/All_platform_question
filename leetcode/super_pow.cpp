#include<bits/stdc++.h>
using namespace std;

    int binExp(int a,int b,int m){
        a%=m;
        int res=1;
        while(b>0){
            if(b&1){
                res=(res*1LL*a)%m;
            }
            a=(a*a*1ll)%m;
            b>>=1;
        }
        return res;

    }
    int superPow(int a, vector<int>& b) {
        if (b.empty()) return 1;
        int ld = b.back();
        b.pop_back();
        int p1 = binExp(a, ld, 1337);
        int p2 = binExp(superPow(a, b), 10, 1337);

        return (p1 * 1LL * p2) % 1337;
    }

int main(){
    int a;
    cin>>a;
    int n;
    cin>>n;
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<superPow(a,b)<<endl;


}