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

    void fun(TreeNode* root, map<int, vector<int>> &mp, int level){
        if(root==NULL) return ;
        mp[level].push_back(root->val);
        if(root->left!= NULL) fun(root->left, mp, level+1);
        if(root->right!= NULL) fun(root->right, mp, level+1);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        map<int, vector<int>> mp;
        fun(root, mp, 0);
        vector<vector<int>> ans;

        for ( auto key: mp){
            vector<int> temp;
            for(auto value: key.second){
                temp.push_back(value);
            }
            ans.push_back(temp);
        }    
        return ans;
    }
};