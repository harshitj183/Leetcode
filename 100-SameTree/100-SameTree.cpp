// Last updated: 5/2/2026, 11:29:22 pm
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
  
        if (p == nullptr && q == nullptr)
            return true;
 
        if (p == nullptr || q == nullptr)
            return false;
 
        if (p->val != q->val)
            return false;
 
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
