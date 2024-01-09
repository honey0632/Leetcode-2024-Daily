// https://leetcode.com/problems/leaf-similar-trees/
// 872. Leaf-Similar Trees

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

    void getLeafValues(TreeNode* node, std::vector<int>& nodeList) {
        if (!node) {
            return;
        }

        if (!node->left && !node->right) {
            nodeList.push_back(node->val);
            return;
        }

        getLeafValues(node->left, nodeList);
        getLeafValues(node->right, nodeList);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;
        getLeafValues(root1, v1);
        getLeafValues(root2, v2);
        return v1 == v2;
    }
};

int main () {
  
   return 0;
}