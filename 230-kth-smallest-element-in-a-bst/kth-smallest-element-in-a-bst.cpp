class Solution {
    int count = 0;
    int ans = 0;

    void inorder(TreeNode* root, int k) {
        if (!root) return;

        inorder(root->left, k);

        if (++count == k) {
            ans = root->val;
            return;
        }

        if (count < k)
            inorder(root->right, k);
    }

public:
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return ans;
    }
};