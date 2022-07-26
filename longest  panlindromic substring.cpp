class Solution
{ public:
    string longestPalindrome(string s)
    {  int n=s.size();
       if(n==0) return "";
       string ans;
       ans=ans+s[0];
       bool dp[n][n];
       memset(dp,0,sizeof(dp));// set all to 0
       for(int i=0;i<n;i++) dp[i][i]=true;// diagnol elements to true
       for(int i=n-1;i>=0;i--){
           for(int j=i+1;j<n;j++){
               if(s[i]==s[j]){
                   if(j-i==1||dp[i+1][j-1]!=0){
                       dp[i][j]=true;
                       if(ans.size()<j-i+1){
                           ans=s.substr(i,j-i+1);
                       }
                   }
               }
           }
       }  return ans;   
    } 
};


