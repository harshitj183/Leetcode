// Last updated: 5/2/2026, 11:28:30 pm
class Solution {
public:
    void findPath(TreeNode* node, vector<string>& ans, string temp) {
        temp += to_string(node->val); 
        if (node->left) findPath(node->left, ans, temp + "->");  // Traverse left
        if (node->right) findPath(node->right, ans, temp + "->"); // Traverse right
        if (!node->left && !node->right) ans.push_back(temp);  // Add path if leaf node
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if (root) findPath(root, ans, "");  // Start traversal from the root
        return ans;
    }
};