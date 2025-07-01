#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    bool flag=false;
    for(int i=0;i<=10000 && !flag;i++){
        for(int j=0;j<=1000;j++){
            int d=(a*i + b*j);
            if(d==c){
                flag=true;
                break;
            }
        }
    }
    if(flag==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}