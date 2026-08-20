class Solution {
public:

    int best = INT_MIN;

    int solve(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int leftGain = max(solve(root->left), 0);
        int rightGain = max(solve(root->right), 0);

        // Maximum path whose highest node is root
        int pathSum = root->val + leftGain + rightGain;

        // Update global answer
        best = max(best, pathSum);

        // Return maximum one-sided path to parent
        return root->val + max(leftGain, rightGain);
    }

    int maxPathSum(TreeNode* root) {
        solve(root);
        return best;
    }
};