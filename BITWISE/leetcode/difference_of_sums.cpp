#include<bits/stdc++.h>
using namespace std;
int differenceOfSums(int n, int m) {
        int num1=0;
        int num2=0;
        for(int i=1;i<=n;i++){
            if(i%m!=0){
                num1+=i;
            }
            else{
                num2+=i;
            }
        }
        return num1-num2;
        
    }
int main(){
    int n,m;
    cin>>n>>m;
    cout<<differenceOfSums(n,m)<<endl;

}