class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxsofar=nums[0],minsofar=nums[0],overallmax=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==0){
                overallmax=max(overallmax,0);
                maxsofar=1;minsofar=1;
            }
            else{ 
                int temp=maxsofar;
       maxsofar=max(nums[i],max(maxsofar*nums[i],minsofar*nums[i]));
         
                
            minsofar=min(nums[i],min(minsofar*nums[i],temp*nums[i]));
                
                overallmax=max(overallmax,maxsofar);
            }
        }
    
    return overallmax;}
};
