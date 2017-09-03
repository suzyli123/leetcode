/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        vector<int>tree;
        TreeNode* p = root;
        while(!s.empty() || p != NULL){
            while(p != NULL){
                s.push(p);
                p = p->left;
            }
            p = s.top();
            s.pop();
            tree.push_back(p->val);
            p = p->right;
        }
        return tree;
    }
};
