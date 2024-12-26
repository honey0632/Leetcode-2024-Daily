// 515. Find Largest Value in Each Tree Row
// https://leetcode.com/problems/find-largest-value-in-each-tree-row/

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
    vector<int> largestValues(TreeNode* root) {
        if(!root){return {};}
        queue<TreeNode*> topq, botq;
        topq.push(root);
        vector<int> ans;
        int curMax = INT_MIN;
        while(!topq.empty()){
            TreeNode *node = topq.front();
            topq.pop();
            curMax = max(curMax, node->val);
            if(node->right){botq.push(node->right);}
            if(node->left){botq.push(node->left);}
            if(topq.empty()){
                ans.push_back(curMax);
                curMax = INT_MIN, topq = botq, botq = {};
            }
        }
        return ans;
    }
};

int main() {
    
     return 0;
}