#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>arr(26,0);
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int ascii=int(ch);
        arr[ascii-97]++;

    }
    int max=0;
    for(int i=0;i<16;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    // comments
    for (int i=0;i<26;i++){
        if(arr[i]==max){
            int ascii=i+97;
            char ch= char(ascii);
            cout<<ch<<" "<<max<<endl;
        }
    }
}