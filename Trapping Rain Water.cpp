class Solution {
public:
    // 2 pointers
    int trap(vector<int>& h) {
        int left=0,right=h.size()-1;
        int n=h.size();
        int maxleft=0,maxright=0;
        int ans=0;
        while(left<right){
            if(h[left]<h[right]){
                if(maxleft<h[left]) {maxleft=h[left];}
                else {ans=ans+maxleft-h[left];}
                left++;
            }
            else{if(maxright<h[right]) {maxright=h[right];}
                else {ans=ans+maxright-h[right];}
                right--;
            }
        }
    return ans;}
};
