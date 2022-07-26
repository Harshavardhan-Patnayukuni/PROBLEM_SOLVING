class Solution {
public:
    void reverse(vector<int> &nums,int start,int end){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;end--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        /**** next permutation according to dictiniory order****/ 
        /* algorithm
        1) traverse from the last find the index satisfiying a[i]<a[i+1] mark it as idx1
        2) now traverse again from the last find the first value which is greater than the a[idx1]
        3) swap(a[idx1],a[idx2]);
        4)reverse(a+idx1,a+a.size());
        */
        int n=nums.size();
        int idx1=-1,idx2=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]) {idx1=i;break;}
        }
       if(idx1>=0) {
        for(int i=n-1;i>=0;i--){
            if(nums[idx1]<nums[i]) {idx2=i;break;}
        }
        swap(nums[idx1],nums[idx2]);}
        reverse(nums,idx1+1,n-1);
        
    }
};
