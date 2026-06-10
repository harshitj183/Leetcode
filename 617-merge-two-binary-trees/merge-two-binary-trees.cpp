/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void solve(TreeNode* root1,TreeNode* root2,TreeNode* &root){

if(root1 == nullptr && root2 == nullptr){

root = nullptr;
return ;

}
 root = new TreeNode();
   
if(root1 != nullptr && root2 != nullptr){

            root->val = root1->val + root2->val;

            solve(root1->left, root2->left, root->left);
            solve(root1->right, root2->right, root->right);
        }
        else if(root1 != nullptr){

            root->val = root1->val;

            solve(root1->left, nullptr, root->left);
            solve(root1->right, nullptr, root->right);
        }
        else{

            root->val = root2->val;

            solve(nullptr, root2->left, root->left);
            solve(nullptr, root2->right, root->right);
        }
 



}


    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
  
  

       TreeNode* root = nullptr;

solve(root1,root2,root);


   return root ;    
    }
};