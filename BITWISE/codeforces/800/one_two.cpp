#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        int count2=0;
        for(int i=0;i<n;++i){
            cin>>nums[i];
            if(nums[i]==2) count2++;
        }
        if (count2%2!=0) {
            cout<<-1<<endl;
        } else{
            int x = count2 / 2;
            int c = 0;
            for (int i=0; i<n;++i) {
                if(nums[i]==2) c++;
                if(c == x){
                    cout << i + 1 << endl; 
                    break;
                }
            }
        }
    }

    return 0;
}