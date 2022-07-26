	class Solution {
public:
    int minDistance(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<vector<int>> dp(n+1,vector<int> (m+1,0));
        for(int i=0;i<=n;i++) dp[i][0]=i;// if t becomes empty i deletions are required to make the s string empty
        for(int j=1;j<=m;j++) dp[0][j]=j;
        for(int i=1;i<=n;i++){ 
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1]) dp[i][j]=dp[i-1][j-1];// no need of operstion
                else{// either del or insertion or replace
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                }
            }
        }
    return dp[n][m];}
};
