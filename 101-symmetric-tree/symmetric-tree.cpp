class Solution {
public:
    bool isSymmetric(TreeNode  *root) {
 
 
       if (root == nullptr)  return true;

        return mirror(root->left,root->right);


        
    }




 ;
private :
    
    bool  mirror(TreeNode *left ,TreeNode *right ){


        if (left == nullptr && right == nullptr) return true;
        if (left == nullptr || right == nullptr)  return  false;

        if (left->val != right ->val ) return false;

        return mirror( left->left ,right->right ) && mirror(right -> left  ,left-> right);
    }
};
