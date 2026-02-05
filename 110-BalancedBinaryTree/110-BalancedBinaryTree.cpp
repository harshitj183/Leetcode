// Last updated: 5/2/2026, 11:29:19 pm
class Solution {
public:
    // Returns: height if balanced, -1 if unbalanced
    int check(TreeNode* root) {
        if (!root) return 0;

        int leftHeight = check(root->left);
        if (leftHeight == -1) return -1;  // left subtree unbalanced

        int rightHeight = check(root->right);
        if (rightHeight == -1) return -1; // right subtree unbalanced

        if (abs(leftHeight - rightHeight) > 1) return -1; // current node unbalanced

        return max(leftHeight, rightHeight) + 1;   // return height
    }

    bool isBalanced(TreeNode* root) {
        return check(root) != -1;
    }
};
