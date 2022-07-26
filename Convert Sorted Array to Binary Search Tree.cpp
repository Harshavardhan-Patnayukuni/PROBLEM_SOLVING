class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convert(nums,0,nums.size()-1);
    }
    TreeNode* convert(vector<int> &nums,int low,int high){
        if(low<=high){
            int mid=(low+high)/2;
            TreeNode *root =new TreeNode(nums[mid]);
            root->left=convert(nums,low,mid-1);
            root->right=convert(nums,mid+1,high);
            return root;
        }
        return NULL;
    }
};