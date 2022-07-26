class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int curr=0;
        for(int i=0;i<nums.size();i++){
            curr=curr+nums[i];
        }
        return sum-curr;
    }
};