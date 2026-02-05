// Last updated: 5/2/2026, 11:27:03 pm
class Solution {
public:
    int temp;

    bool isUnivalTree(TreeNode* root) {
        if (root == nullptr) return true;
        temp = root->val;
        return travel(root->left, root->right);
    }

private:
    bool travel(TreeNode* left, TreeNode* right) {

         
        if (!left && !right) return true;
 
        if (left && !right) {
            if (left->val != temp) return false;
            return travel(left->left, left->right);
        }

        if (!left && right) {
            if (right->val != temp) return false;
            return travel(right->left, right->right);
        }
 
        if (left->val != temp || right->val != temp)
            return false;

        return travel(left->left, left->right) &&
               travel(right->left, right->right);
    }
};
