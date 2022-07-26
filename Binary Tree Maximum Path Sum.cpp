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
    int maxpath(TreeNode* root,int &maxi ){
        if(root== NULL) return 0;
        int l=maxpath(root->left,maxi);
        int r=maxpath(root->right,maxi);
        if(l<0) l=0;
        if(r<0) r=0;
        if(l+r+root->val > maxi) {maxi = l+r+root->val;}
        root->val=root->val+max(l,r);
        return root->val;
        
    }
    int maxPathSum(TreeNode* root) {
      int maxi=INT_MIN;
      int val= maxpath(root,maxi);
        cout<<val<<endl;
        return maxi;
    }
};