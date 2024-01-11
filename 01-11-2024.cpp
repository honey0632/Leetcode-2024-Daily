// 1026. Maximum Difference Between Node and Ancestor
// https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/


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
    void diff(TreeNode *root, int mini, int maxi,int &ans) {
		if (!root) return;
		ans = max(ans, max(abs(mini - root->val), abs(maxi - root->val)));
		mini = min(mini, root->val);
		maxi = max(maxi, root->val);
		diff(root->left, mini, maxi,ans);
		diff(root->right, mini, maxi,ans);
	}
    int maxAncestorDiff(TreeNode* root) {
        int ans = 0;
        if(!root) return 0;
        int mini = root->val, maxi = root->val;
		diff(root, mini, maxi,ans);
		return ans;
    }
};

int main () {
  
   return 0;
}