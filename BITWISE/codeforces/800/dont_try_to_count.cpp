#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int count = 0;
        string temp = x; 
        bool flag=false;
        while (temp.length() <= 50) { 
            if (temp.find(s) != string::npos) {
                cout << count << endl;
                flag=true;
                break;
            }
            temp += temp; 
            count++;
        }
        if(flag==false){
            cout << -1 << endl;
        }
        
    }
    return 0;
        
    
    
}