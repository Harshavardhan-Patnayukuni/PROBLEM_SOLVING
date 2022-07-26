class Solution {
public:
    // o(nlog(n)) is sorting
    //o(2n) is counting no of 0,1,2 and arragning in the array
     // o(n) solution
    void sortColors(vector<int>& nums) {
        // funda is 3 pointers
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid=0;
        int temp;
        while(mid<=high){
            if(nums[mid]==0){swap(nums[mid],nums[low]);
                            mid++;
                            low++;}
            else if(nums[mid]==1){mid++;}
            
            else if(nums[mid]==2){                swap(nums[mid],nums[high]);                           
                                  high--;
            }
        }
        
    }
};
