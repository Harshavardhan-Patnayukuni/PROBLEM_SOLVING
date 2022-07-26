class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootidx=0;
        return fun(preorder,inorder,rootidx,0,inorder.size()-1);
    }
    TreeNode* fun(vector<int>& preorder, vector<int>& inorder,int &rootidx,int left,int high){
        if(left>high) return NULL;
        int pivot=left;
        while(preorder[rootidx]!=inorder[pivot]) pivot++;
        rootidx++;
        TreeNode * newnode=new TreeNode(inorder[pivot]);
        newnode->left=fun(preorder,inorder,rootidx,left,pivot-1);
        newnode->right=fun(preorder,inorder,rootidx,pivot+1,high);
        return newnode;
    }
};