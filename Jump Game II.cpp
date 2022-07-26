class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size(),count=0;
        int i=0,current=0,farthest=0;
        for(i=0;i<n-1;i++){ // focus on n-1
            farthest=max(farthest,i+nums[i]);
            if(i==current){
                count++;
                current=farthest;
            }
        }
       return count; 
    }
};
