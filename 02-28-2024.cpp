// 513. Find Bottom Left Tree Value
// https://leetcode.com/problems/find-bottom-left-tree-value/

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
    void help(TreeNode* node, int currD, int& depth, int& leftmost) {
        if (node == NULL) {
            return;
        }

        // If we have reached a new level
        if (currD > depth) {
            depth = currD;
            leftmost = node->val;
        }

        // Explore left and right subtrees
        help(node->left, currD + 1, depth, leftmost);
        help(node->right, currD + 1, depth, leftmost);
    }
    int findBottomLeftValue(TreeNode* root) {
        int depth = 0;
        int leftmost = 0;
        help(root, 1, depth, leftmost);
        return leftmost;
    }

};
int main () {
    
     return 0;
}