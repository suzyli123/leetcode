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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s == NULL)
            return false;
        if(s->val == t->val && check(s, t))
            return true;
        else
            return (isSubtree(s->left, t) || isSubtree(s->right, t));
    }
    bool check(TreeNode *s, TreeNode *t){
        if(s == NULL && t == NULL)
            return true;
        else if(s == NULL || t == NULL)
            return false;
        if(s->val == t->val)
            return (check(s->left, t->left) && check(s->right, t->right));
        else
            return false;
    }
};
