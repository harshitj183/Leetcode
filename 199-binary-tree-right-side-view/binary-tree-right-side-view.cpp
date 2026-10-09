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
    vector<int> rightSideView(TreeNode* root) {

if(root == nullptr) return {};



        vector<int> res;



        queue<TreeNode* > qk;
        qk.push(root);



 while (!qk.empty()) {
        int sz = qk.size();
        vector<int> level;

        while (sz--) {
            TreeNode* node = qk.front();
            qk.pop();

            level.push_back(node->val);

            if (node->left != nullptr)
                qk.push(node->left);

            if (node->right != nullptr)
                qk.push(node->right);
        }

        res.push_back(level[level.size()-1]);
    }
        


        return res;
    }
};