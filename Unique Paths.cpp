class Solution {
public:
    /*  
    ans =nCm;
    */
    // using dp after striver playlist
    int uniquePaths(int m, int n) {
        int dp[m][n];
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 and j==0) dp[i][j]=1;
                else if (i>=m or j>=n) return 0;
                else {
                    int up=0,left=0;
                 if(i>0)   up = dp[i-1][j];
                  if(j>0)  left=dp[i][j-1];
                    dp[i][j]=up+left;
                }
            }
        }
    return dp[m-1][n-1];}
};
/*
class Solution {
public:
    int uniquePaths(int m, int n) {
        int N=m+n-2;
        int r=m-1;
        double res=1;
        for(int i=1;i<=r;i++){
            res=res*(N-r+i)/i;
        }
        return (int)res;
    }
};

*/