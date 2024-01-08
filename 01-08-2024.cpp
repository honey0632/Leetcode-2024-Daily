// 938. Range Sum of BST
// https://leetcode.com/problems/range-sum-of-bst/

#include<bits/stdc++.h>
using namespace std;

  // Definition for a binary tree node.
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

    int inorder(TreeNode* root, int low, int high, int & ans){

        if(!root) return 0;

        inorder(root->left,low,high,ans);
        if(root->val <=high && root->val >=low) ans+= root->val;
        inorder(root->right,low,high,ans);

        return ans;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;

        return inorder(root,low,high,ans);
    }
};

int main () {
  
   return 0;
}