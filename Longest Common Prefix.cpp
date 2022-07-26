class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string res;
        int n=strs.size();
        sort(strs.begin(),strs.end());
        int i;
        string x=strs[0];
        string y=strs[n-1];
        for(i=0;i<x.size();i++){
        if(x[i]==y[i]){
            res=res+x[i];
        }
        else{ break; }
        }
    return res;
    }
};
