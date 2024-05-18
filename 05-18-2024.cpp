// 979. Distribute Coins in Binary Tree
// https://leetcode.com/problems/distribute-coins-in-binary-tree/

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
    int distributeCoins(TreeNode* root, TreeNode* parent= NULL) {
        if (!root) return 0;
        int  moves=distributeCoins(root->left, root)+distributeCoins(root->right, root);
        int x=root->val-1;// give x coins to parent node
        if (parent) parent->val += x; // now parent's coins
        moves+=abs(x);
        return moves;
    }
};
int main () {
    
     return 0;
}