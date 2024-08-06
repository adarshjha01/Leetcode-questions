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

    void fun (TreeNode* root, int &maximum, int level){
        if(root==nullptr) return ;
        maximum= max(maximum, level);
        if(root->left!=NULL) fun(root->left, maximum, level+1);
        if(root->right!=NULL) fun(root->right, maximum, level+1);
    }

    int maxDepth(TreeNode* root) {
        int maximum=0;
        fun(root, maximum, 1);
        return maximum;    
    }
};