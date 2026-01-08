class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        // Base case: empty tree
        if (root == nullptr)
            return false;

        // If leaf node, check if remaining sum equals node value
        if (root->left == nullptr && root->right == nullptr)
            return targetSum == root->val;

        // Recur for left and right subtree
        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
    }
};
