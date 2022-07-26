class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==0) return s;
        string ans;
        ans=ans+s[0];
        if(n==1) return ans;
        bool dp[n][n];
        memset(dp,false,sizeof(dp));
        for(int i=0;i<n;i++) dp[i][i]=true;
        for(int i=n;i>=0;i--){
            for(int j=i+1;j<=n;j++){
                if(s[i]==s[j]){
                if(j-i==1 or dp[i+1][j-1]==true){
                    dp[i][j]=true;
                    if(ans.size()<j-i+1){
                        ans=s.substr(i,j-i+1);
                    }
                }}
            } 
        }
        return ans;
    }
};