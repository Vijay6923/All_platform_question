#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int n=a.length();
        string b="";
        
        for(int i=n-1;i>=0;i--){
            if(a[i]=='p'){
                b+='q';
            }
            else if(a[i]=='q'){
                b+='p';
            }
            else{
                b+='w';
            }
        }
        cout<<b<<endl;
        
    }
    
}