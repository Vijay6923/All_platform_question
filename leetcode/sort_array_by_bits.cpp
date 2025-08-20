#include<bits/stdc++.h>
using namespace std;
vector<int> sortByBits(vector<int>& arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int countA = __builtin_popcount(a); 
        int countB = __builtin_popcount(b);
        if (countA != countB) return countA < countB;
        return a < b;
    });
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=sortByBits(arr);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

}