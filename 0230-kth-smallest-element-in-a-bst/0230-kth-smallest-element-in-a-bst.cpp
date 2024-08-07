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
    int count;
    int result;
    void inOrderTraversal(TreeNode* root, int& k){
        if(root==NULL) return ;

        inOrderTraversal(root->left, k);
        count++;
        if(count==k){
            result=root->val;
            return ;
        }

        inOrderTraversal(root->right, k);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        inOrderTraversal(root,k);
        return result;
    }
};