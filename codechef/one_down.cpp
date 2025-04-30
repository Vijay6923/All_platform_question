#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,t;
        cin >> s >> t;
        bool flag = true;
        for (int i = 0;i<n;++i) {
            if (t[i] == '1' && s[i] == '0') {
                flag = false;
                break;
            }
        }
        if (!flag) {
            cout << "NO" << endl;
            continue;
        }
        int count_s1=0;
	    int count_t1=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1')count_s1++;
	    }
	    for(int i=0;i<n;i++){
	        if(t[i]=='1')count_t1++;
	    }
        int d = count_s1 - count_t1;
        if (d < 0 || d % 2 != 0) {
            cout <<"NO"<<endl;
        } else {
            cout<<"YES"<< endl;
        }
    }
    return 0;
}