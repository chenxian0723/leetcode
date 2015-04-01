/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode *root, int sum) {
        if(root==NULL)
            return false;
        if((sum==root->val)&&(root->left==NULL)&&(root->right==NULL))   //要确保是叶子节点
            return true;
        return hasPathSum(root->left,sum-root->val)||hasPathSum(root->right,sum-root->val);   //左右节点有一个满足即可
    }
};
