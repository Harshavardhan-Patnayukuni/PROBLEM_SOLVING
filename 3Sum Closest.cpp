class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int mindif=INT_MAX;
        int result;
        int i,j,k;
        int dif,sum;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++){
            j=i+1;
            k=nums.size()-1;
            while(j<k){
                    sum=nums[j]+nums[k]+nums[i];
                if(sum==target){return sum;}
                if(sum<target){
                    dif=target-sum;
                    j++;
                }
                else{
                    dif=sum-target;
                    k--;
                }
                if(dif<mindif){
                    mindif=dif;
                    result=sum;
                }}
        }
        return result;
    }
};
