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
    bool isSameTree(TreeNode* a, TreeNode* b) {
        // both null → equal
        if (!a && !b) return true;
        // one null, one not → not equal
        if (!a || !b) return false;
        // values differ → not equal
        if (a->val != b->val) return false;
        // check left and right subtrees
        return isSameTree(a->left, b->left) && isSameTree(a->right, b->right);
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false; // can't find a subtree in an empty tree
        // if trees match at this node, return true
        if (isSameTree(root, subRoot)) return true;
        // otherwise, try left or right child
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
