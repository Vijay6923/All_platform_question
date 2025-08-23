#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;    
    if (n <= 3) return true;          
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
bool checkPrimeFrequency(vector<int>& nums) {
    int n=nums.size();
    map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[nums[i]]++;
    }
    for (auto &x: freq) {
        int c = x.second;
        if (c > 1 && isPrime(c)) return true;
    }
    return false;        
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<checkPrimeFrequency(nums)<<endl;

}