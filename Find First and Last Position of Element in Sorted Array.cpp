class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==1&&target==nums[0]){
            return {0,0};
        }
        int f=0;
        int b=nums.size()-1;
        int mid;
        vector<int> result;
        int i;
        while(f<=b){
            mid=(f+b)/2;
            if(target==nums[mid]){
                i=mid;
                while(i>=f&&nums[i]==target){
                    i--;
                }
                i++;
                while(i<=b&&nums[i]==target){
                    result.push_back(i);
                    i++;
                }
                break;
            }
            if(target>nums[mid]){
                f=mid+1;
            }
            if(target<nums[mid]){
                b=mid-1;
            }
        }
        
        if(result.size()!=0){
            int n=result.size();
            return {result[0],result[n-1]};
        }
        return {-1,-1};
    }
};
