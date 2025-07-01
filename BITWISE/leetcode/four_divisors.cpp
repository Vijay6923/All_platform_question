#include<bits/stdc++.h>
using namespace std;
int sum0fdivisor(int n){
        int sum=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                sum+=i;
                if(i!=n/i){
                    sum+=n/i;
                }
            }
        }
        return sum;
    }
    int totaldivisor(int n){
        int count=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                count++;
                if(i!=n/i){
                    count++;
                }
            }
        }
        return count;
    }
    int sumFourDivisors(vector<int>& nums) {
        
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int a=totaldivisor(nums[i]);
            if(a==4){

                ans+=sum0fdivisor(nums[i]);
            }
        }
        return ans;
    }
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<sumFourDivisors(nums)<<endl;
}