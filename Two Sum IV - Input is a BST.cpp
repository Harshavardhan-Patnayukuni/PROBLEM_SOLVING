class Solution {
public:
    unordered_set<int> st;
    void traversal(TreeNode*root ,int k,bool &ans){
        if(root==NULL) return;
        if(st.find(root->val)!=st.end()){
            ans=true;
            return;
        }
        else{
            st.insert(k-root->val);
        }
        traversal(root->left,k,ans);
        traversal(root->right,k,ans);
    }
    bool findTarget(TreeNode* root, int k) {
        bool ans=false;
        traversal(root,k,ans);
        return ans;
    }
};