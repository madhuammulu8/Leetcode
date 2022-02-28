class Solution {
    void dfs(TreeNode *node,vector<int>&ans){
        if(node==NULL)
            return;
        dfs(node->left,ans);
        ans.push_back(node->val);
        dfs(node->right,ans);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        dfs(root,v);
        return v;
    }
};