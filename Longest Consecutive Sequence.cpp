class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)!=s.end()){
                continue;
            }
            else{
                int count=1,a=i,j=1;
                while(s.find(nums[a]+j)!=s.end()){
                    j++;
                    count++;
                }
                maxi=max(maxi,count);
            }
        }
    return maxi;}
};