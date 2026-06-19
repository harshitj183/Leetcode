class Solution {
public:
    
    TreeNode* prev;
    
    void inorder(TreeNode* root) {
        if (root == nullptr) {
            return;
        }

        inorder(root->left);

        root->left = nullptr;   // left child hata do
        prev->right = root;     // previous node se connect karo
        prev = root;            // prev update

        inorder(root->right);
    }

    TreeNode* increasingBST(TreeNode* root) {
        
        TreeNode* dummy = new TreeNode(0);
        prev = dummy;

        inorder(root);

        return dummy->right;
    }
};