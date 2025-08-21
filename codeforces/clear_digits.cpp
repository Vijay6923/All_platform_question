#include<bits/stdc++.h>
using namespace std;
string clearDigits(string s) {
    int n = s.size();
    string ans = "";
    for (int i = 0; i < n; i++) {
        if (s[i] >= 97 && s[i] <= 122) {
            ans += s[i];
        }
        else {
            if (!ans.empty()) {
                ans.erase(ans.size() - 1, 1);
            }
        }
    }
    return ans; 
}
int main(){
    string s;
    cin>>s;
    cout<<clearDigits(s)<<endl;

}