/* class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        if(nums.back()<target){return nums.size(); }
        if(nums[0]>target){return 0;}
        for(i=0;i<nums.size();i++){
            if(nums[i]==target){return i;}
            if(nums[i]<target&&nums[i+1]>target){return i+1;}
            
        }
        return nums.size();
    }
};*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int> :: iterator it;
        it=lower_bound(nums.begin(),nums.end(),target);
        return distance(nums.begin(),it);
    }
};
