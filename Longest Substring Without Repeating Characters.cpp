class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> mpp;
        int l=0,r=0,ans=0;
        while(r<s.length()){
            mpp[s[r]]++;
            while(mpp[s[r]]>1){
                mpp[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }return ans;
    }
};
