#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin >> n >> m;
    long long count =0;
    vector<int>arr(m);
    for(int i=0; i<m; i++){
        cin >> arr[i];
        if(i!=0){
            if(arr[i]>=arr[i-1]) count = count + (arr[i]-arr[i-1]);
            else count = count + (n - arr[i-1] + arr[i]);
        }
        else if(i==0) count = count + arr[i]-1;
 
    }
    cout << count;
 
}