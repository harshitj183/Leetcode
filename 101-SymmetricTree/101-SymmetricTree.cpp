// Last updated: 5/2/2026, 11:29:20 pm
class Solution {
public:
    bool isSymmetric(TreeNode  *root) {
 
 
    
        return mirror(root->left,root->right);


        
    }




 ;
 
   private: 
    bool  mirror(TreeNode *left ,TreeNode *right ){


        if (left == nullptr && right == nullptr) return true;
        if (left == nullptr || right == nullptr)  return  false;

        if (left->val != right ->val ) return false;

        return mirror( left->left ,right->right ) && mirror(right -> left  ,left-> right);
    }
};
