class Solution {
public:
    // just keeping the eye on maximum point it can reach
    bool canJump(vector<int>& nums) {
       int i;
       int reach=0;
        for(i=0;i<nums.size()&&i<=reach;i++){
            reach=max(reach,i+nums[i]);
        }
        if(i==nums.size()){
            return true;
        }
        return false;
    }
};
