class Solution {
public:
 
    bool solve(TreeNode* root, TreeNode* target, vector<TreeNode*>& path) {
        if (!root) return false;

        path.push_back(root);

        if (root == target)
            return true;

        if (solve(root->left, target, path) ||
            solve(root->right, target, path))
            return true;

        path.pop_back();
        return false;
    }
 
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        vector<TreeNode*> left;
        vector<TreeNode*> right;

        solve(root, p, left);
        solve(root, q, right);

        TreeNode* ans = nullptr;

        for (int i = 0; i < min(left.size(), right.size()); i++) {

            if (left[i] == right[i]) {
                ans = left[i];
            } else {
                break;
            }
        }

        return ans;
    }
};