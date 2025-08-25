#include<bits/stdc++.h>
using namespace std;
vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    if (mat.empty() || mat[0].empty()) return {};
    int m = mat.size(), n = mat[0].size();
    vector<int> ans(m * n);
    int row = 0, col = 0;
    for (int i = 0; i < m * n; i++) {
        ans[i] = mat[row][col];
        if ((row + col) % 2 == 0) {
            if (col == n - 1) row++;
            else if (row == 0) col++;
            else { row--; col++; }
        } else {
            if (row == m - 1) col++;
            else if (col == 0) row++;
            else { row++; col--; }
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
    vector<int> result = findDiagonalOrder(mat);
    for (int x : result) cout << x << " ";
    cout <<endl;

}