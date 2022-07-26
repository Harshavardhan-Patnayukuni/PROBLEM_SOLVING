class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& num) {
        int ans=0,count=0;
        for(int i=0;i<num.size();i++){
            cout<<i<<count<<ans<<endl;
            if(num[i]==1) count++;
            else {ans=max(ans,count); count=0;}
        }
        ans=max(ans,count);
        return ans;
    }
};