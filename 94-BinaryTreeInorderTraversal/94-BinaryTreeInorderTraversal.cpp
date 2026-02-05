// Last updated: 5/2/2026, 11:29:23 pm
class Solution {
public:
  


  
 vector<int> inorderTraversal(TreeNode* root) {
                   vector<int> res;
        inorder(root, res);
                return res;
    }


;





    void inorder(TreeNode* node, vector<int>& res) {
        if (!node) return;
            inorder(node->left, res);
        res.push_back(node->val);
                    inorder(node->right, res);
    }    



};
