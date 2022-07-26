class Solution {
public:
    int search(vector<int>& nums, int target) {
        int f=0;
        int b,mid;
        b=nums.size()-1;
        while(f<=b){
           mid=(f+b)/2;
            if(target==nums[mid]){
                return mid;
            }
            if(nums[f]<=nums[mid]){
                if(target<=nums[mid]&&target>=nums[f]){
                    b=mid-1;
                }
                else{
                    f=mid+1;
                }
            }
            else{
                if(target>nums[mid]&&target<nums[f]){
                    f=mid+1;
                }
                else{
                    b=mid-1;
                    
                }
            }
        }
        return -1;
    }
};
