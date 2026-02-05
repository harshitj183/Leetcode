// Last updated: 5/2/2026, 11:28:36 pm
 // for std::swap

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
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return root;
        
        changekarbhai(root->left, root->right);
        return root;
    }

private: 
    void changekarbhai(TreeNode*& left, TreeNode*& right) {
        swap(left, right);               
        if (left)  changekarbhai(left->left,  left->right);
        if (right) changekarbhai(right->left, right->right);
    }
};
