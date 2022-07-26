class Solution {
public:
    // take care when n is 19  // use long 
    int numTrees(int n) {
       return c(2*n,n)/(n+1); 
    }
    long  c(int n,int r){
        long ans=1.0;
        for(int i=0;i<r;i++){
            ans=ans*(n-i);
            ans=ans/(i+1);
        }
        return ans;
    }
};