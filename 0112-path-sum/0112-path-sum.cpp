class Solution {
public:

    bool hasPathSum(TreeNode* root, int targetSum) {

        // Tree empty hai
        if(root == NULL)
            return false;

        // Leaf node mil gayi
        if(root->left == NULL && root->right == NULL) {
            return root->val == targetSum;
        }

        // Left ya Right subtree mein check karo
        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
    }
};