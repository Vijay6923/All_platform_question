#include<bits/stdc++.h>
using namespace std;
int countPrimes(int n) {
        if(n <= 2) return 0;
        vector<bool>p(n,true);
        p[0]=p[1]=false;
        for(int i=2;i*i<n;i++){
            if(p[i]==true){
                for(int j=i*i;j<n;j+=i){
                    p[j]=false;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(p[i]==true) count++;

        }
        return count;
        
    }
int main(){
    int n;
    cin>>n;
    cout<<countPrimes(n)<endl;

}