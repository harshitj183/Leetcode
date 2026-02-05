// Last updated: 5/2/2026, 11:27:39 pm
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }

private:
    // returns height (in nodes) of subtree rooted at node
    int height(TreeNode* node, int &diameter) {
        if (!node) return 0;

        int leftHeight = height(node->left, diameter);
        int rightHeight = height(node->right, diameter);

        // candidate diameter passing through this node (in edges)
        diameter = max(diameter, leftHeight + rightHeight);

        // height of current node (in nodes)
        return 1 + max(leftHeight, rightHeight);
    }
};
