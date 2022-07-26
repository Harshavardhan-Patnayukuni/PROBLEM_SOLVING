class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // better do using iteration
        // this is alternate method
       auto it=remove(nums.begin(),nums.end(),val);
        return distance(nums.begin(),it);}
};
