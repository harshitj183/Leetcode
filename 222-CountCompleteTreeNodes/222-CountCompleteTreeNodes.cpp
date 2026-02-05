// Last updated: 5/2/2026, 11:28:38 pm
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
int temp =1;

    int countNodes(TreeNode* root) {
 

if (!root)   return   0;

 if (root->left ) 
 {
    temp++;
 countNodes(root->left);
 }

 if (root->right){
temp++;
 countNodes(root->right);
 }
    return temp;    
    }
};