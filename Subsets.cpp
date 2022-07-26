class Solution {
public:
    vector<vector<int>> ans;
    // backtracking
    void fun(int x,vector<int> &nums,vector<int> &temp){
        ans.push_back(temp);
        for(int i=x;i<nums.size();i++){
            temp.push_back(nums[i]);
            fun(i+1,nums,temp);
            temp.pop_back();
        }
        
        return;
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
     int n=nums.size();
     vector<int> temp;
     fun(0,nums,temp);
     return ans;
     }
};
