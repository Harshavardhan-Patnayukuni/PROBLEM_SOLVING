class Solution {
public:
    void fun(TreeNode* root,int level,vector<vector<int>> &ans){
        if(root==NULL) return;
        if(level==ans.size()) ans.push_back({});
        ans[level].push_back(root->val);
        fun(root->left,level+1,ans);
        fun(root->right,level+1,ans);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        fun(root,0,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};