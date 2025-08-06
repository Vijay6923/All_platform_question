#include<bits/stdc++.h>
using namespace std;
int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
    int n=fruits.size();
    int res=n;
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            if (fruits[i]<=baskets[j]){
                res--;
                baskets[j]=0;
                break;
            }
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int>fruits(n),baskets(n);
    for(int i=0;i<n;i++){
        cin>>fruits[i];
    }
    for(int i=0;i<n;i++){
        cin>>baskets[i];
    }
    cout<<numOfUnplacedFruits(fruits,baskets)<<endl;
}