class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
          vector<vector<int>> result;
          sort(nums.begin(),nums.end());
          int i;
          int n=nums.size();
        for(i=0;i<n;i++){
            if(i>0&&nums[i]==nums[i-1]){
                continue;}
            int left=i+1;
            int right=n-1;
            while(left<right){
                if(nums[i]+nums[right]+nums[left]==0){
            result.push_back({nums[i],nums[right],nums[left]});
                    int leftval,rightval;
                    leftval=nums[left];
                    rightval=nums[right];
                    while(left<right&&leftval==nums[left]){
                        left++;
                    }
                    while(left<right&&rightval==nums[right]){
                        right--;
                    }
                }
                else if(nums[i]+nums[right]+nums[left]<0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
    return result;}
};
