#include<bits/stdc++.h>
using namespace std;
int findClosest(int x, int y, int z) {
    int a=abs(x-z);
    int b=abs(y-z);
    if(a>b) return 2;
    else if(b>a) return 1;
    else return 0;
        
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<findClosest(x,y,z)<<endl;

}