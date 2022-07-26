class Solution {
public:
    void fun(TreeNode *root,int level,vector<vector<int>> &res){
        if(root==NULL) return;
        if(level==res.size()) res.push_back({});
        res[level].push_back(root->val);
        fun(root->left,level+1,res);
        fun(root->right,level+1,res);
        return;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     vector<vector<int>> res;
        fun(root,0,res);
        for(int i=1;i<res.size();i=i+2){
            reverse(res[i].begin(),res[i].end());
        }
        return res;
    }
};