// 2096. Step-By-Step Directions From a Binary Tree Node to Another
// https://leetcode.com/problems/step-by-step-directions-from-a-binary-tree-node-to-another/

#include<bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    static bool dfs(TreeNode* root, int x, auto& path) {
        if (root == NULL)
            return 0;
        if (root->val == x)
            return 1;

        path.push_back('L');
        if (dfs(root->left, x, path)) return 1;
        path.pop_back();

        path.push_back('R');
        if (dfs(root->right, x, path)) return 1;
        path.pop_back();

        return 0;
    }

    static string getDirections(TreeNode* root, int startValue, int destValue) {
        string pathFrom, pathTo;
        dfs(root, startValue, pathFrom);
        dfs(root, destValue, pathTo);

        // Find the point where paths diverge
        int n=pathFrom.size(), m=pathTo.size(), sz = 0;
        int minz = min(n, m);
        while (sz < minz && pathFrom[sz] == pathTo[sz]) 
            sz++;

        return string(n-sz, 'U') + string(pathTo.begin()+sz, pathTo.end());
    }
};
int main () {
    
     return 0;
}