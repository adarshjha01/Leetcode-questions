class Solution {
public:
    void pre_order(TreeNode *root, vector<int> &ans){
        if(root == NULL) return;
        ans.push_back(root->val);
        pre_order(root->left,ans);
        pre_order(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        pre_order(root,ans);
        return ans;
    }
};
