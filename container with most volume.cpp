class Solution {
public:
    // 2 pointers 
    int maxArea(vector<int>& h) {
       int i=0,j=h.size()-1;
        int maxarea=INT_MIN;
        while(i<j){
            if(h[i]<h[j]) {maxarea=max(maxarea,(j-i)*h[i]); i++;}
            else{maxarea=max(maxarea,h[j]*(j-i));j--;}
        }
    return maxarea;}
};
