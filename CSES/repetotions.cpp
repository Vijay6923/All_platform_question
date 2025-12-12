#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();

    int i = 0;
    int j = 1;
    int count = 1; 
    int ans = 1;  

    while (j < n) {
        if (s[i] == s[j]) {
            count++;
            j++; 
        } 
        else {
            ans = max(ans, count);
            count = 1;     
            i = j;         
            j++;
        }
    }

    ans = max(ans, count);

    cout << ans << endl;
}