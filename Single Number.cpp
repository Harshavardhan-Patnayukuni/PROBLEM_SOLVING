class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto s:nums){
            ans=ans^s;
        }
        return ans;
    }
};