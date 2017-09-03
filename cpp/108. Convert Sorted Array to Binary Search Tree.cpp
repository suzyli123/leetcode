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
    TreeNode* dfs(vector<int>& nums, int left, int right){
        if(left > right)
            return NULL;
        else if(left == right)
            return new TreeNode(nums[left]);
        else{
            int mid = left+(right-left)/2;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = dfs(nums, left, mid-1);
            root->right = dfs(nums, mid + 1, right);
            return root;
        }
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return dfs(nums, 0, nums.size()-1);
    }
};
