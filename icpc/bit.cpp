// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     long long a[t];
//     for(int i=0;i<t;i++){
//         cin >>a[i];
//     }
// }
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string result = "";
    for (int i = 1; i <= n; ++i) {
        string binary = "";
        int num = i;
        while (num > 0) {
            binary = char((num & 1) + '0') + binary; 
            num >>= 1; 
        }
        result += binary;
    }


    cout << result  << endl;
    return 0;
}
