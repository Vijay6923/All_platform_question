#include<bits/stdc++.h>
using namespace std;
int firstBadVersion(int n) {
        int i = 1;
        int j = n;
        while (i < j) {
            int mid = i + (j - i) / 2;
            if (firstBadVersion(mid)) {
                j = mid;
            } else {
                i = mid + 1;
            }
        }
        return i;    
        }
int main(){
    int n;
    cin>>n;
    cout<<firstBadVersion(n)<<endl;
}