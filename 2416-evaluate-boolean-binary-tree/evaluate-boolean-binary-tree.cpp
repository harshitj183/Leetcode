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
    bool evaluateTree(TreeNode* root) {
        // Base: leaf node (0 or 1)
        if (!root->left && !root->right) {
            return root->val == 1;
        }

        // Recursively evaluate children
        bool leftVal = evaluateTree(root->left);
        bool rightVal = evaluateTree(root->right);

        // Non-leaf: 2 = OR, 3 = AND
        if (root->val == 2) {
            return leftVal || rightVal;
        } else { // root->val == 3
            return leftVal && rightVal;
        }
    }
};

