#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode* l, TreeNode* r) : val(x), left(l), right(r) {}
};

vector<TreeNode*> allPossibleFBT(int n) {
    if (n % 2 == 0) return {};

    vector<TreeNode*> list;
    if (n == 1) {
        list.push_back(new TreeNode(0));
    } 
    else {
        for (int i = 1; i <= n - 1; i += 2) {
            vector<TreeNode*> lTrees = allPossibleFBT(i);
            vector<TreeNode*> rTrees = allPossibleFBT(n - i - 1);
            for (TreeNode* lt : lTrees) {
                for (TreeNode* rt : rTrees) {
                    list.push_back(new TreeNode(0, lt, rt));
                }
            }
        }
    }
    return list;
}

// Function to print tree in Preorder (for demonstration)
void printPreorder(TreeNode* root) {
    if (!root) {
        cout << "null ";
        return;
    }
    cout << root->val << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    vector<TreeNode*> result = allPossibleFBT(n);

    cout << "Number of Full Binary Trees: " << result.size() << "\n";
    cout << "Preorder traversal of each tree:\n";

    for (int i = 0; i < result.size(); i++) {
        cout << "Tree " << i + 1 << ": ";
        printPreorder(result[i]);
        cout << "\n";
    }

    return 0;
}
