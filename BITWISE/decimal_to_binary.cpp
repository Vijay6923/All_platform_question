#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    string result=" ";
    while(x!=0){
        if(x%2==0){
            result='0'+result;
        }
        else{
            result='1'+result;

        }
        x=x>>1;
    }
    cout<<result<<endl;

}