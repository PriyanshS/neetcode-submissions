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
    TreeNode* invertTree(TreeNode* root) {
        if(!root){
            return nullptr;
        }
        queue<TreeNode*> tree;
        tree.push(root);
        while(!tree.empty()){
            TreeNode* node=tree.front();
            tree.pop();
            swap(node->left,node->right);
            if(node->left){
                tree.push(node->left);
            }
            if(node->right){
                tree.push(node->right);
            }

        }
        return root;
    }
};
