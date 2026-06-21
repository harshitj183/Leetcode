class Solution {

    void solve(TreeNode* root, int& maxv, int& mmaxv) {

        if (root == nullptr) {
            return;
        }

        solve(root->left, maxv, mmaxv);

        if (maxv != INT_MIN) {
            mmaxv = min(mmaxv, root->val - maxv);
        }

        maxv = root->val;

        solve(root->right, maxv, mmaxv);
    }

public:
    int getMinimumDifference(TreeNode* root) {

        int maxv = INT_MIN;
        int mmaxv = INT_MAX;

        solve(root, maxv, mmaxv);

        return mmaxv;
    }
};