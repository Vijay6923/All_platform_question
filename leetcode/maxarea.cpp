#include<bits/stdc++.h>
using namespace std;
int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
    int ans = 0, dia = 0;
    for (int i = 0; i < dimensions.size(); i++) {
        int l = dimensions[i][0];
        int w = dimensions[i][1];
        int currDiag = l * l + w * w;
        if (currDiag > dia || (currDiag == dia && l * w > ans)) {
            dia = currDiag;
            ans = l * w;
        }
    }
        return ans;
}

int main(){
    int m, n;
    cin>>m>>n;
    vector<vector<int>> mat(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    cout<<areaOfMaxDiagonal(mat);
    
    

}


























