class Solution {
public:
    void fun(TreeNode* root,vector<int> &ans){
        if(root==NULL) return;
        if (root->left!=NULL)   fun(root->left,ans);
        if(root->right!=NULL)   fun(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        fun(root,ans);
        return ans;
    }
};