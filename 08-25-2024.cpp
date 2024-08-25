// 145. Binary Tree Postorder Traversal
// https://leetcode.com/problems/binary-tree-postorder-traversal/

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
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector < int > ans;
        if (root == NULL) return ans;

        stack < TreeNode * > st;
        while (root != NULL || !st.empty()) {

            if (root != NULL) {
                st.push(root);
                root = root -> left;
            } 
            else {
                TreeNode * temp = st.top() -> right;
                if (temp == NULL) {
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp -> val);
                    while (!st.empty() && temp == st.top() -> right) {
                        temp = st.top();
                        st.pop();
                        ans.push_back(temp -> val);
                    }
                }  else root = temp;
            }
        }
    return ans;
    }
};

int main () {
    
     return 0;
}