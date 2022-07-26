class Solution {
public:
    bool find(vector<int> &nums,int target){
        int n=nums.size();
        vector<vector<bool>> dp(n+1,vector<bool>(target+1,false));
        for(int i=0;i<=n;i++) dp[i][0]=true;
        if(nums[0]==target)dp[0][nums[0]]=true;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++){
                bool nottake=dp[i-1][j];
                bool take=false;
                if(nums[i-1]<=j) take=dp[i-1][j-nums[i-1]];
                dp[i][j]=take||nottake;
            }
        }
        return dp[n][target];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        if(sum%2==1) return false;
        return find(nums,sum/2);
    }
};