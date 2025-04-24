#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c1=0;
        for(char c:s) {
            if (c == '1') c1++;
        }
        int total = 0;
        for(int i = 0; i < n; i++){
            if (s[i] == '1') {
                total += c1 - 1;
            } else {
                total += c1 + 1;
            }
        }
        cout << total << endl;
        
    }
}