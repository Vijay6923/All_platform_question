#include<bits/stdc++.h>
using namespace std;
int phi(int n) {
    int ans = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            ans -= ans / i;
        }
    }
    if (n > 1) {
        ans -= ans / n;
    }
    return ans;
}
    long long int sumOfGCDofPairs(int n) {
        // complete the function here
        const int m=1e9+7;
        int final_ans = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                int x = i;
                int y = n / i;
                final_ans += x * phi(n / x);
                if (x != y)
                    final_ans += y * phi(n / y);
            }
        }
        final_ans=final_ans%m;
        return final_ans;
    }
int main(){
    int n;
    cin>>n;
    cout<<sumOfGCDofPairs(n)<<endl;


}