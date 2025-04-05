#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int i=0,j=0;
        int maxLen=0;
        while(j<n){
            if(arr[j]==0){
                j++;
                maxLen=max(maxLen,j-i);
            }else{
                j++;
                i=j;
            }
        }

        cout<<maxLen<<endl;
    }

    return 0;
}