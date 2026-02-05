// Last updated: 5/2/2026, 11:29:18 pm
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;

        // If one of the children is null
        if (root->left == nullptr)
            return 1 + minDepth(root->right);

        if (root->right == nullptr)
            return 1 + minDepth(root->left);

        // Both children exist
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};
