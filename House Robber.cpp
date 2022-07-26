class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1);
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            int pick=0,nonpick=0;
            pick=nums[i];
            if(i>1) pick=pick+dp[i-2];
            nonpick=0+dp[i-1];
            dp[i]=max(pick,nonpick);
        }
    return  dp[n-1];}
};
