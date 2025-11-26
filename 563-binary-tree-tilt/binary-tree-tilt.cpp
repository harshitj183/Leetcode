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
    int findTilt(TreeNode* root) {
        int totalTilt = 0;
        subtreeSum(root, totalTilt);
        return totalTilt;
    }
    
private:
    // Returns sum of subtree rooted at 'node', and updates totalTilt.
    int subtreeSum(TreeNode* node, int &totalTilt) {
        if (!node) return 0;
        
        int leftSum = subtreeSum(node->left, totalTilt);
        int rightSum = subtreeSum(node->right, totalTilt);
        
        // Tilt of current node
        totalTilt += std::abs(leftSum - rightSum);
        
        // Sum of this subtree
        return leftSum + rightSum + node->val;
    }
};
