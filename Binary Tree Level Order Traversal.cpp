class Solution {
public:
    void fun(TreeNode* root,int level,vector<vector<int>> &res){
        if(root==NULL) return;
        if(level==res.size()) res.push_back({});//key point
        res[level].push_back(root->val);
        fun(root->left,level+1,res);
        fun(root->right,level+1,res);
        return;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        fun(root,0,res);
        return res;
    }
};