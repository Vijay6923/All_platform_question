#include<bits/stdc++.h>
using namespace std;
string largestGoodInteger(string num) {
    int n=num.size();
    string ans="";
    for(int i=0;i<=n-3;i++){
        if (num[i] == num[i+1] && num[i] == num[i+2]) {
            string temp = num.substr(i, 3);
            if(temp > ans){
                ans = temp; 
            }
        }
    }
    return ans;
}
int main(){
    string num;
    cin>>num;
    cout<<largestGoodInteger(num)<<endl;

}