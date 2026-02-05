// Last updated: 5/2/2026, 11:27:01 pm
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        if (!root) return false;

        queue<pair<TreeNode*, TreeNode*>> q; 
        // pair -> (currentNode, parentNode)
        q.push({root, nullptr});

        while (!q.empty()) {
            int size = q.size();
            TreeNode* parentX = nullptr;
            TreeNode* parentY = nullptr;

            while (size--) {
                auto [node, parent] = q.front();
                q.pop();

                if (node->val == x) parentX = parent;
                if (node->val == y) parentY = parent;

                if (node->left) q.push({node->left, node});
                if (node->right) q.push({node->right, node});
            }

            // If both found on same level → check parents
            if (parentX && parentY)
                return parentX != parentY;

            // If only one found at this level → depth differs
            if (parentX || parentY)
                return false;
        }

        return false;
    }
};
