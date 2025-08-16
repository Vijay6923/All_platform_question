#include<bits/stdc++.h>
using namespace std;
int maximum69Number (int num) {
    string s = to_string(num);
    for (char &c : s) {
        if (c == '6') { c = '9'; break; }
    }
    return stoi(s);
        
}
int main(){
    int n;
    cin>>n;
    cout<<maximum69Number(n)<<endl;

}